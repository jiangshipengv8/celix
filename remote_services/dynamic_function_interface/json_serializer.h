/**
 * Licensed under Apache License v2. See LICENSE for more information.
 */
#ifndef __JSON_SERIALIZER_H_
#define __JSON_SERIALIZER_H_

#include "dfi_log_util.h"
#include "dyn_type.h"

//logging
DFI_SETUP_LOG_HEADER(jsonSerializer);

int jsonSerializer_deserialize(dyn_type *type, const char *input, void **result);
int jsonSerializer_serialize(dyn_type *type, void *input, char **output);

#endif
