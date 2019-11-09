/* Distributed under the MIT license     *
 * Copyright (c) 2019, Rostislav Kuratch *
 * All rights reserved.                  */

#pragma once

#ifdef POSTGREMQL4_EXPORTS
#define POSTGREMQL5_API extern "C" __declspec(dllexport)
#else
#define POSTGREMQL4_API extern "C" __declspec(dllimport)
#endif

POSTGREMQL5_API const wchar_t* pmql_connect(const wchar_t* host, const wchar_t* port, const wchar_t* user, const wchar_t* pass, const wchar_t* db);
POSTGREMQL5_API const wchar_t* pmql_disconnect();

POSTGREMQL5_API __int64 pmql_begin_transaction();
POSTGREMQL5_API const wchar_t* pmql_commit(__int64 trans_ptr);
POSTGREMQL5_API const wchar_t* pmql_rollback(__int64 trans_ptr);

POSTGREMQL5_API const wchar_t* pmql_exec_in_transaction(__int64 trans_ptr, const wchar_t* query);
POSTGREMQL5_API const wchar_t* pmql_exec(const wchar_t* query);

POSTGREMQL5_API void pmql_delimiters(int val_delim, int col_delim, int row_delim);
POSTGREMQL5_API void pmql_set_cache_size(int max_cache_size);