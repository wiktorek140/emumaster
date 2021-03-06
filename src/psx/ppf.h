/*  PPF Patch Support for PCSX-Reloaded
 *  Copyright (c) 2009, Wei Mingzhi <whistler_wmz@users.sf.net>.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111-1307 USA
 */

#ifndef PSXPPF_H
#define PSXPPF_H

#include "cdrom.h"

#ifdef __cplusplus
extern "C" {
#endif

void BuildPPFCache();
void FreePPFCache();
void CheckPPFCache(unsigned char *pB, unsigned char m, unsigned char s, unsigned char f);

int LoadSBI(const char *fname, int sector_count);
void UnloadSBI(void);

extern unsigned char *sbi_sectors;

static inline int CheckSBI(const u8 *t)
{
	int s;
	if (sbi_sectors == NULL)
		return 0;

	s = MSF2SECT(btoi(t[0]), btoi(t[1]), btoi(t[2]));
	return (sbi_sectors[s >> 3] >> (s & 7)) & 1;
}

#ifdef __cplusplus
}
#endif

#endif // PSXPPF_H
