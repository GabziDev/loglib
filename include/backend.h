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
 * I Backend
 */
#ifndef LOGLIB_BACKEND_H
#define LOGLIB_BACKEND_H

#include <stdbool.h>

typedef struct {
    bool (*init)(const char *filename);
    void (*write)(const char *msg);
    void (*flush)(void);
    void (*close)(void);
} log_backend_t;

extern log_backend_t file_backend;
extern log_backend_t console_backend;

#endif
