#ifndef STDLIB_H_DEFINED__
#define STDLIB_H_DEFINED__
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
#ifndef SIZE_T_H_DEFINED__
#include "size_t.h"
#endif
void * malloc(size_t);
void * realloc(void *, size_t);
void * calloc(size_t, size_t);
void free(void*);
#endif
