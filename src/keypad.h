/*
 *   Copyright (c) 2002 David Parsons. All rights reserved.
 *   
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *  3. All advertising materials mentioning features or use of this
 *     software must display the following acknowledgement:
 *     
 *   This product includes software developed by David Parsons
 *   (orc@pell.portland.or.us)
 *
 *  4. My name may not be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *     
 *  THIS SOFTWARE IS PROVIDED BY DAVID PARSONS ``AS IS'' AND ANY
 *  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 *  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 *  PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL DAVID
 *  PARSONS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 *  TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 *  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 *  THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __NDIALOG_KEYPAD_H
#define __NDIALOG_KEYPAD_H

#define KEY_F(x)	((x)<<8)
#define KEY_F0		0x0100
#define KEY_F1		0x0200
#define KEY_F2		0x0300
#define KEY_F3		0x0400
#define KEY_F4		0x0500
#define KEY_F5		0x0600
#define KEY_F6		0x0700
#define KEY_F7		0x0800
#define KEY_F8		0x0900
#define KEY_F9		0x1000
#define KEY_BACKSPACE	0x1100	/* erase char */
#define KEY_BTAB	0x1200	/* M-\t */
#define KEY_DC		0x1300	/* M-x */
#define KEY_DOWN	0x1400  /* M-j */
#define KEY_END		0x1500	/* M-g */
#define KEY_HOME	0x1600	/* M-s */
#define KEY_IC		0x1700	/* M-i */
#define KEY_LEFT	0x1800	/* M-h */
#define KEY_NPAGE	0x1900	/* M-f */
#define KEY_PPAGE	0x1a00	/* M-u */
#define KEY_RIGHT	0x1b00	/* M-l */
#define KEY_UP		0x1c00	/* M-k */

#endif/*!__NDIALOG_KEYPAD_H*/


