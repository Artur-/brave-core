/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_FTX_BROWSER_FTX_JSON_PARSER_H_
#define BRAVE_COMPONENTS_FTX_BROWSER_FTX_JSON_PARSER_H_

#include <map>
#include <string>
#include <vector>

#include "brave/components/ftx/browser/ftx_service.h"

class FTXJSONParser {
 public:
  static bool GetFuturesDataFromJSON(const std::string& json,
      FTXFuturesData* data,
      const std::string& filter);
  static bool GetChartDataFromJSON(const std::string& json,
      FTXChartData* data);
};

#endif  // BRAVE_COMPONENTS_FTX_BROWSER_FTX_JSON_PARSER_H_