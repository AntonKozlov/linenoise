/* linenoise.h -- guerrilla line editing library against the idea that a
 * line editing lib needs to be 20,000 lines of C code.
 *
 * See linenoise.c for more information.
 *
 * ------------------------------------------------------------------------
 *
 * Copyright (c) 2010, Salvatore Sanfilippo <antirez at gmail dot com>
 * Copyright (c) 2010, Pieter Noordhuis <pcnoordhuis at gmail dot com>
 *
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 
 *  *  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *  *  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef __LINENOISE_TERM_H_
#define __LINENOISE_TERM_H_

#include <sys/types.h>

struct lnTerminal;

extern int  lnTermGetColumns(struct lnTerminal *lnTerm);
extern int  lnTermSavePrepare(struct lnTerminal *lnTerm);
extern void lnTermResotre(struct lnTerminal *lnTerm);
extern int  lnTermWrite(struct lnTerminal *lnTerm, const char *buf, size_t len);
extern int  lnTermRead(struct lnTerminal *lnTerm, char *buf, size_t len);
extern void lnTermBeep(struct lnTerminal *lnTerm);

extern void lnTermClearScreen(struct lnTerminal *lnTerm);
extern void lnTermClearLineRight(struct lnTerminal *lnTerm);
extern void lnTermCursorSet(struct lnTerminal *lnTerm, unsigned int pos);
extern void lnTermCursorLineAdd(struct lnTerminal *lnTerm, int l);

#endif /* __LINENOISE_TERM_H_ */
