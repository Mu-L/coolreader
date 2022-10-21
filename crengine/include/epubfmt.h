/***************************************************************************
 *   CoolReader engine                                                     *
 *   Copyright (C) 2010-2012 Vadim Lopatin <coolreader.org@gmail.com>      *
 *   Copyright (C) 2018 poire-z <poire-z@users.noreply.github.com>         *
 *   Copyright (C) 2020 NiLuJe <ninuje@gmail.com>                          *
 *   Copyright (C) 2020 Aleksey Chernov <valexlin@gmail.com>               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU General Public License           *
 *   as published by the Free Software Foundation; either version 2        *
 *   of the License, or (at your option) any later version.                *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the Free Software           *
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,            *
 *   MA 02110-1301, USA.                                                   *
 ***************************************************************************/

#ifndef EPUBFMT_H
#define EPUBFMT_H

#include "../include/crsetup.h"
#include "../include/lvtinydom.h"

// That's how many meta nodes we parse before giving up
#define EPUB_META_MAX_ITER 50U
// That's how many item nodes we parse before giving up
#define EPUB_ITEM_MAX_ITER 50000U
// That's how many nav/ncx toc nodes we parse before giving up
#define EPUB_TOC_MAX_ITER 5000

bool DetectEpubFormat( LVStreamRef stream );
bool ImportEpubDocument( LVStreamRef stream, ldomDocument * doc, LVDocViewCallback * progressCallback, CacheLoadingCallback * formatCallback, bool metadataOnly = false );
lString32 EpubGetRootFilePath( LVContainerRef m_arc );
LVStreamRef GetEpubCoverpage(LVContainerRef arc);


#endif // EPUBFMT_H
