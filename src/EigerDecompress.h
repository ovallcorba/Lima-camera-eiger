//###########################################################################
// This file is part of LImA, a Library for Image Acquisition
//
// Copyright (C) : 2009-2022
// European Synchrotron Radiation Facility
// CS40220 38043 Grenoble Cedex 9 
// FRANCE
//
// Contact: lima@esrf.fr
//
// This is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//###########################################################################
#ifndef EIGERDECOMPRESS_H
#define EIGERDECOMPRESS_H

#include "lima/Debug.h"
#include "lima/HwReconstructionCtrlObj.h"

namespace lima
{
  namespace Eiger
  {
    class Stream;
    class Decompress : public HwReconstructionCtrlObj
    {
      DEB_CLASS_NAMESPC(DebModCamera,"Decompress","Eiger");
    public:
      Decompress();
      virtual ~Decompress();

      virtual LinkTask* getReconstructionTask();

      void setActive(bool);
    private:
      LinkTask* m_decompress_task;
    };
  }
}
#endif
