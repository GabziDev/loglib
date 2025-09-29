/*
 * Created by Gabzdev on 9/28/25.
 *
 * Copyright (c) Gabzdev
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * API publique
 */
#ifndef LOGLIB_LOG_H
#define LOGLIB_LOG_H

#include <stdbool.h>
#include <stdarg.h>
#include <stddef.h>

// levels
typedef enum {
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR,
    LOG_FATAL
} log_level_t;

bool log_init(const char *filename, log_level_t level, bool console_output);
void log_close(void);

// rotation
void log_set_max_size(size_t bytes);
void log_set_daily_rotation(bool enable);

void log_write(log_level_t level, const char *fmt, ...);

// macros
#define LOGI(fmt, ...) log_write(LOG_INFO, fmt, ##__VA_ARGS__)
#define LOGW(fmt, ...) log_write(LOG_WARN, fmt, ##__VA_ARGS__)
#define LOGE(fmt, ...) log_write(LOG_ERROR, fmt, ##__VA_ARGS__)
#define LOGF(fmt, ...) log_write(LOG_FATAL, fmt, ##__VA_ARGS__)

#endif
