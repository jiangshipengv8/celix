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

#pragma once


namespace celix::rsa {

    /**
     * @brief Service property (named "service.exported") to mark a service as wanting to be exported (remote).
     * Present means -> export service as a remote service.
     */
    constexpr const char * const REMOTE_SERVICE_EXPORTED_PROPERTY_NAME = "service.exported";

    /**
     * @brief Service property (named "remote") to mark a service as a imported service.
     * Present means -> service is a imported service (proxy of a remote service).
     */
    constexpr const char * const REMOTE_SERVICE_IMPORTED_PROPERTY_NAME = "service.imported";

}