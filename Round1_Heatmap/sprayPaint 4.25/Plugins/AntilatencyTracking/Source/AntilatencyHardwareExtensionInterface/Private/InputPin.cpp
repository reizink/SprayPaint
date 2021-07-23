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

#include "InputPin.h"

#include "HardwareExtensionInterfaceLog.h"
#include "HardwareExtensionInterfaceCotask.h"

#include <ExceptionCheck.h>

UInputPin* UInputPin::CreateInputPin(const Antilatency::HardwareExtensionInterface::IInputPin& native, const UHardwareExtensionInterfaceCotask* cotask) {
    if (native == nullptr) {
        HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Failed to create UInputPin: native input pin is nullptr"));
        return nullptr;
    }
	
	if (cotask == nullptr){
		HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Failed to create UInputPin: hardware extension interface cotask is nullptr"));
        return nullptr;
	}

	if (!cotask->IsValid()) {
		HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Failed to create UInputPin: hardware extension interface cotask is in invalid state"));
		return nullptr;
	}

    auto result = NewObject<UInputPin>();
    result->_native = native;
	result->_cotask = cotask;
    return result;
}

Antilatency::InterfaceContract::ExceptionCode UInputPin::GetState(EPinState& result) const {
	if (!IsValid()) {
		return Antilatency::InterfaceContract::ExceptionCode::ErrorPointer;
	}

	Antilatency::HardwareExtensionInterface::Interop::PinState nativeResult;
	auto exception = _native.getState(nativeResult);
	ANTILATENCY_EXCEPTION_CHECK_RETURN_ON_FAIL(_native, exception);

	result = static_cast<EPinState>(nativeResult);
	return exception;
}

bool UInputPin::IsValid() const {
    if (_native == nullptr) {
        HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Native input pin is nullptr"));
        return false;
    }
	
	if (_cotask == nullptr || !_cotask->IsValid()) {
		HARDWAREEXTENSIONINTERFACE_LOG(Warning, TEXT("Hardware extension interface cotask is nullptr or invalid (native cotask is nullptr)"));
        return false;
	}

    return true;
}