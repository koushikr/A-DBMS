/*
 * Copyright 2019 Koushik R <rkoushik.14@gmail.com>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GLOBALS_H
#define	GLOBALS_H


#ifndef GLOBAL
#define EXTERN extern
#else
#define EXTERN
#endif

#define _UNPAD __attribute__((__packed__))
#define ERROR (-1)
#define KB 1024 //This will be multiplied with the page size in KB to get the actual size
#define FSET 1  // Flag Set
#define FRSET 0 // Flag Reset
#define PAGESIZE 4096 // 8 KB page size
#define PG_DATASIZE 4080// PAGESIZE - (header size of the page) = PAGESIZE - 4*4
#define MAX_FILE_NAME 16 // Maximum chars in a filename
#define MAX_FULL_PATH 30
#define MAX_DB_INDEX 10
#define HEADER_PAGE 1
#define EMPTY -1
#define DBPATH "./"
#define SUCCESS 0


// Types Supported by the Engine
#define INT 1
#define VARCHAR 2
#define CHAR 3
#define FLOAT 4

//Relation macros

#define CREATE 0
#define INSERT 1
#define SELECT 2
#define DELETE 3
#define UPDATE 4
#define ALTER 5
#define DESCRIBE 6

//condition macros
#define COLUMN 0
#define LITERAL 1
#define OPERATOR 2
#define BOOLEAN 3




// Replacement Policies Supported
#define LRU 1

EXTERN int Verbose_Flag;
EXTERN int Replace_Policy;



#endif	/* GLOBALS_H */

