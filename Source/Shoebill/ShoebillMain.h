/**
 * Copyright (C) 2011 MK124
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __SHOEBILL_MAIN__
#define __SHOEBILL_MAIN__
inline int getServerCodepage()
{
	extern int serverCodepage;
	return serverCodepage;
}

inline void setServerCodepage(int codepage)
{
	extern int serverCodepage;
	serverCodepage = codepage;
}

inline int getPlayerCodepage(int playerid)
{
	extern int playerCodepage[];
	extern int serverCodepage;
	int ret = playerCodepage[playerid];
	if (ret == 0) ret = serverCodepage;
	return ret;
}

inline void setPlayerCodepage(int playerid, int codepage)
{
	extern int playerCodepage[];
	playerCodepage[playerid] = codepage;
}
#endif
