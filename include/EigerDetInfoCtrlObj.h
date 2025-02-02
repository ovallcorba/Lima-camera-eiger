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
#ifndef EIGERDETINFOCTRLOBJ_H
#define EIGERDETINFOCTRLOBJ_H

#include "lima/HwDetInfoCtrlObj.h"
#include "EigerCamera.h"

namespace lima
{
    namespace Eiger
    {

/*******************************************************************
 * \class DetInfoCtrlObj
 * \brief Control object providing Eiger detector info interface
 *******************************************************************/

	class /*LIBEIGER*/ DetInfoCtrlObj : public HwDetInfoCtrlObj
	{
	    DEB_CLASS_NAMESPC(DebModCamera, "DetInfoCtrlObj", "Eiger");

	public:
	    DetInfoCtrlObj(Camera& cam);
	    virtual ~DetInfoCtrlObj();

	    virtual void getMaxImageSize(Size& max_image_size);
	    virtual void getDetectorImageSize(Size& det_image_size);

	    virtual void getDefImageType(ImageType& def_image_type);
	    virtual void getCurrImageType(ImageType& curr_image_type);
	    virtual void setCurrImageType(ImageType  curr_image_type);

	    virtual void getPixelSize(double& xsize, double& ysize);
	    virtual void getDetectorType(std::string& det_type);
	    virtual void getDetectorModel(std::string& det_model);

	    virtual void registerMaxImageSizeCallback(HwMaxImageSizeCallback& cb);
	    virtual void unregisterMaxImageSizeCallback(HwMaxImageSizeCallback& cb);
	private:
	    Camera& m_cam;
	};

    } // namespace Eiger
} // namespace lima

#endif // EIGERDETINFOCTRLOBJ
