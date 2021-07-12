// Copyright 2020, ALT LLC. All Rights Reserved.
// This file is part of Antilatency SDK.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://www.antilatency.com/eula
// You may not use this file except in compliance with the License.
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "PulseCounterPin.h"

#include "HardwareExtensionInterfaceLog.h"
#include "HardwareExtensionInterfaceCotask.h"

#include <ExceptionCheck.h>

UPulseCounterPin* UPulseCounterPin::CreatePulseCounterPin(const Antilatency::HardwareExtensionInterface::IPulseCounterPin& native, const UHardwareExtensionInterfaceCotask* cotask) {
    if (native == nullptr) {
        HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Failed to create UPulseCounterPin: native pulse counter pin is nullptr"));
        return nullptr;
    }
	
	if (cotask == nullptr) {
		HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Failed to create UPulseCounterPin: hardware extension interface cotask is nullptr"));
		return nullptr;
	}

	if (!cotask->IsValid()) {
		HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Failed to create UPulseCounterPin: hardware extension interface cotask is in invalid state"));
		return nullptr;
	}

    auto result = NewObject<UPulseCounterPin>();
    result->_native = native;
	result->_cotask = cotask;
    return result;
}

Antilatency::InterfaceContract::ExceptionCode UPulseCounterPin::GetValue(uint16_t& result) const {
	if (!IsValid()) {
		return Antilatency::InterfaceContract::ExceptionCode::ErrorPointer;
	}

	auto exception = _native.getValue(result);
	ANTILATENCY_EXCEPTION_CHECK_RETURN_ON_FAIL(_native, exception);

	return exception;
}

bool UPulseCounterPin::IsValid() const {
    if (_native == nullptr) {
        HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Native pulse counter pin is nullptr"));
        return false;
    }
	
	if (_cotask == nullptr || !_cotask->IsValid()) {
		HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Hardware extension interface cotask is nullptr or invalid (native cotask is nullptr)"));
		return false;
	}

    return true;
}