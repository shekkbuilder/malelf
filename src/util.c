/* 
 * The malelf tool was written in pure C and developed using malelf library
 * to analyze (static/dynamic) malwares and infect ELF binaries. Evil using 
 * this tool is the responsibility of the programmer.
 *
 * Author: Tiago Natel de Moura <tiago4orion@gmail.com>
 *
 * Contributor: Daniel Ricardo dos Santos <danielricardo.santos@gmail.com>
 *              Paulo Leonardo Benatto <benatto@gmail.com>
 *
 * Copyright 2012, 2013 by Tiago Natel de Moura. All Rights Reserved.
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
 *
 */

#include <stdio.h>
#include <getopt.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

#define HTOA(dest, src) sprintf(dest, "0x%08x", src)

void malelf_help(const char *format, ...)
{
        va_list args;
        va_start(args, format);
        vfprintf(stderr, format, args);
        va_end(args);
}

