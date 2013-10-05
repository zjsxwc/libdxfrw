/******************************************************************************
**  libDXFrw - Library to read/write DXF files (ascii & binary)              **
**                                                                           **
**  Copyright (C) 2011-2013 Rallaz, rallazz@gmail.com                        **
**                                                                           **
**  This library is free software, licensed under the terms of the GNU       **
**  General Public License as published by the Free Software Foundation,     **
**  either version 2 of the License, or (at your option) any later version.  **
**  You should have received a copy of the GNU General Public License        **
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.    **
******************************************************************************/

#ifndef DWGREADER15_H
#define DWGREADER15_H

#include <map>
#include <list>
#include "drw_textcodec.h"
#include "dwgbuffer.h"
#include "dwgreader.h"
//#include "../libdwgr.h"

class dwgReader15 : public dwgReader {
public:
    dwgReader15(std::ifstream *stream, dwgR *p):dwgReader(stream, p){ }
    virtual ~dwgReader15() {
        //RLZ: clear & destroy ltmap;
    }
    bool readFileHeader();
    //RLZ todo    bool readDwgHeader();
    //RLZ todo    bool readDwgClasses();
    bool readDwgClasses();
    bool readDwgObjectOffsets();
    bool readDwgTables();
    bool readDwgEntity(objHandle& obj, DRW_Interface& intfa);
};


#endif // DWGREADER15_H
