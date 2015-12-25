#ifndef TYPES_LINKER_struct_start_end_h__
#define TYPES_LINKER_struct_start_end_h__
/*
    Copyright 2015 Robert Elder Software Inc.
    
    Licensed under the Apache License, Version 2.0 (the "License"); you may not 
    use this file except in compliance with the License.  You may obtain a copy 
    of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the 
    License for the specific language governing permissions and limitations 
    under the License.
*/

#ifndef TYPES_LINKER_struct_linker_symbol_h__
#include "struct_linker_symbol.h"
#endif
#ifndef TYPES_LINKER_struct_linker_object_h__
#include "struct_linker_object.h"
#endif

struct start_end {
	struct linker_object * source;
	struct linker_symbol * symbol;
	unsigned int is_start; /*  1 = start offset, = 0 end offset */
	unsigned int pad;
};

#endif
