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
 * Structure interne
 */
#ifndef LOGLIB_INTERNAL_H
#define LOGLIB_INTERNAL_H

#include <stdio.h>
#include <pthread.h>
#include "backend.h"
#include "config.h"

typedef struct {
    FILE *file;
    bool console_output;
    size_t max_size;
    bool daily_rotation;
    char current_date[16];
    pthread_mutex_t mutex;
    log_backend_t *backend;
} logger_t;

extern logger_t g_logger;

#endif
