// SPDX-FileCopyrightText: 2011 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef PLACEHOLDERITEM_H
#define PLACEHOLDERITEM_H

#include "dockitem.h"

class PlaceholderItem : public DockItem
{
    Q_OBJECT

public:
    explicit PlaceholderItem(QWidget *parent = 0);

    inline ItemType itemType() const override { return Placeholder; }
};

#endif // PLACEHOLDERITEM_H
