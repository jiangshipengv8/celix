/**
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
/*
 * endpoint_discovery_poller.h
 *
 * \date       3 Jul 2014
 * \author     <a href="mailto:celix-dev@incubator.apache.org">Apache Celix Project Team</a>
 * \copyright  Apache License, Version 2.0
 */

#ifndef ENDPOINT_DISCOVERY_POLLER_H_
#define ENDPOINT_DISCOVERY_POLLER_H_

#include "celix_errno.h"
#include "discovery.h"

typedef struct endpoint_discovery_poller *endpoint_discovery_poller_pt;

celix_status_t endpointDiscoveryPoller_create(discovery_pt discovery, bundle_context_pt context, endpoint_discovery_poller_pt *poller);
celix_status_t endpointDiscoveryPoller_destroy(endpoint_discovery_poller_pt poller);

celix_status_t endpointDiscoveryPoller_addDiscoveryEndpoint(endpoint_discovery_poller_pt poller, char *url);
celix_status_t endpointDiscoveryPoller_removeDiscoveryEndpoint(endpoint_discovery_poller_pt poller, char *url);


#endif /* ENDPOINT_DISCOVERY_POLLER_H_ */