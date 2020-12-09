/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "extensions/common/manifest_handlers/incognito_info.h"

#define IsSplitMode ForSplitModeCheck(browser_context()->IsTor())->IsSplitMode
#include "../../../../extensions/browser/process_manager.cc"
#undef IsSplitMode