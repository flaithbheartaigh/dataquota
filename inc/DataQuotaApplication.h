/*
Data Quota for Symbian phones.
http://code.google.com/p/dataquota/
Copyright (C) 2008, 2009, 2011  Hugo van Kemenade

This file is part of Data Quota.

Data Quota is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

Data Quota is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Data Quota.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __DATAQUOTAAPPLICATION_H__
#define __DATAQUOTAAPPLICATION_H__

// INCLUDES
#include <aknapp.h>

// CLASS DECLARATION

class CDataQuotaApplication : public CAknApplication
	{
	private: // From CApaApplication
		CApaDocument* CreateDocumentL();
		TUid AppDllUid() const;
	};

#endif // __DATAQUOTAAPPLICATION_H__

// End of file
