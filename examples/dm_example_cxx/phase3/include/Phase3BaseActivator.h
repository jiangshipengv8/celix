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

#ifndef CELIX_PHASE3BASEACTIVATOR_H
#define CELIX_PHASE3BASEACTIVATOR_H

#include "celix/dm/DmActivator.h"

using namespace celix::dm;

class Phase3BaseActivator : public DmActivator {
public:
    Phase3BaseActivator(DependencyManager& mng) : DmActivator(mng), cmp{mng.createComponent<Phase3Cmp>()} {}
    void init();
protected:
    celix::dm::Component<Phase3Cmp>& cmp;
};

#endif //CELIX_PHASE3BASEACTIVATOR_H
