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

/** @defgroup altTrackingModule Alt Tracking Module
 * This module provides functionality to work with the Antilatency Alt Tracking library.
 *  @{
 */

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UObject/NoExportTypes.h"

#include <Antilatency.Alt.Tracking.h>

/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules 
 * within this plugin.
 */
class IAntilatencyAltTrackingModule : public IModuleInterface {

public:
	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IAntilatencyAltTrackingModule& Get() {
		return FModuleManager::LoadModuleChecked< IAntilatencyAltTrackingModule >( "AntilatencyAltTracking" );
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable() {
		return FModuleManager::Get().IsModuleLoaded( "AntilatencyAltTracking" );
	}

	static FString GetPluginName();
	static FString GetPluginDirectory();
	static FString GetPluginBinariesDirectory();

    virtual void PreUnloadCallback() override;

    Antilatency::Alt::Tracking::ILibrary GetNativeLibrary();

private:
    void* _altTrackingDllHandle = nullptr;
    Antilatency::Alt::Tracking::ILibrary _trackingLibrary;
};

/** @} */