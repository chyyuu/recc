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
#ifndef struct_c_lexer_token_ptr_compare__H__DEFINED__
#include "struct_c_lexer_token_ptr_compare.h"
#endif

int struct_c_lexer_token_ptr_compare(struct c_lexer_token * a, struct c_lexer_token * b){
	if(a > b){
		return 1;
	}else if(a < b){
		return -1;
	}else{
		return 0;
	}
}
