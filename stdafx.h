/* Distributed under the MIT license     *
 * Copyright (c) 2019, Rostislav Kuratch *
 * All rights reserved.                  */

#pragma once

#define NOMINMAX
#define _WIN32_WINNT _WIN32_WINNT_WINXP
#define WIN32_LEAN_AND_MEAN

#include <SDKDDKVer.h>

#include <stdio.h>
#include <pqxx/pqxx>
#include <windows.h>
#include <vector>
#include <string>
#include <sstream>