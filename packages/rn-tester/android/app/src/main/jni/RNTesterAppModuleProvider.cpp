/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "RNTesterAppModuleProvider.h"

#include <ReactAndroidSpec.h>

namespace facebook {
namespace react {

std::shared_ptr<TurboModule> RNTesterAppModuleProvider(const std::string moduleName, const JavaTurboModule::InitParams &params) {
  return ReactAndroidSpec_ModuleProvider(moduleName, params);
}

} // namespace react
} // namespace facebook
