/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef _THRIFT_BINARY_PROTOCOL_FACTORY_H
#define _THRIFT_BINARY_PROTOCOL_FACTORY_H

#include <glib-object.h>

#include <thrift/c_glib/protocol/thrift_protocol_factory.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* type macros */
#define THRIFT_TYPE_BINARY_PROTOCOL_FACTORY (thrift_binary_protocol_factory_get_type ())
#define THRIFT_BINARY_PROTOCOL_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THRIFT_TYPE_BINARY_PROTOCOL_FACTORY, ThriftBinaryProtocolFactory))
#define THRIFT_IS_BINARY_PROTOCOL_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THRIFT_TYPE_BINARY_PROTOCOL_FACTORY))
#define THRIFT_BINARY_PROTOCOL_FACTORY_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), THRIFT_TYPE_BINARY_PROTOCOL_FACTORY, ThriftBinaryProtocolFactoryClass))
#define THRIFT_IS_BINARY_PROTOCOL_FACTORY_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), THRIFT_TYPE_BINARY_PROTOCOL_FACTORY))
#define THRIFT_BINARY_PROTOCOL_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THRIFT_TYPE_BINARY_PROTOCOL_FACTORY, ThriftBinaryProtocolFactoryClass))

typedef struct _ThriftBinaryProtocolFactory ThriftBinaryProtocolFactory;

struct _ThriftBinaryProtocolFactory
{
  ThriftProtocolFactory parent;
};

typedef struct _ThriftBinaryProtocolFactoryClass ThriftBinaryProtocolFactoryClass;

struct _ThriftBinaryProtocolFactoryClass
{
  ThriftProtocolFactoryClass parent;
};

/* used by THRIFT_TYPE_BINARY_PROTOCOL_FACTORY */
GType thrift_binary_protocol_factory_get_type (void);

#ifdef  __cplusplus
}
#endif

#endif /* _THRIFT_BINARY_PROTOCOL_FACTORY_H */
