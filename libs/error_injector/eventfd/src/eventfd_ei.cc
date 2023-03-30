/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *  KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#include "eventfd_ei.h"
#include "celix_error_injector.h"
#include <cerrno>

extern "C" {
int celix_ei_eventfd_errno = 0;
int __real_eventfd(unsigned int __initval, int __flags);
CELIX_EI_DEFINE(eventfd, int)
int __wrap_eventfd(unsigned int __initval, int __flags) {
    errno = celix_ei_eventfd_errno;
    CELIX_EI_IMPL_NEGATIVE(eventfd);
    errno = 0;
    return __real_eventfd(__initval, __flags);
}
}