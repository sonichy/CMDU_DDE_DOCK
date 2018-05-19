/*
 * Copyright (C) 2011 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     sbw <sbw@sbw.so>
 *
 * Maintainer: sbw <sbw@sbw.so>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PLUGINPROXYINTERFACE_H
#define PLUGINPROXYINTERFACE_H

#include "constants.h"

#include <QtCore>

class PluginsItemInterface;
class PluginProxyInterface
{
public:
    ///
    /// \brief itemAdded
    /// add a new dock item
    /// if itemkey of this plugin inter already exist, the new item
    /// will be ignored, so if you need to add multiple item, you need
    /// to ensure all itemKey is different.
    /// \param itemInter
    /// your plugin interface
    /// \param itemKey
    /// your item unique key
    ///
    virtual void itemAdded(PluginsItemInterface * const itemInter, const QString &itemKey) = 0;
    ///
    /// \brief itemUpdate
    /// update(repaint) spec item
    /// \param itemInter
    /// \param itemKey
    ///
    virtual void itemUpdate(PluginsItemInterface * const itemInter, const QString &itemKey) = 0;
    ///
    /// \brief itemRemoved
    /// remove spec item, if spec item is not exist, dock will to nothing.
    /// dock will NOT delete your object, you should manage memory by your self.
    /// \param itemInter
    /// \param itemKey
    ///
    virtual void itemRemoved(PluginsItemInterface * const itemInter, const QString &itemKey) = 0;
    ///
    /// \brief requestContextMenu
    /// request show context menu
    ///
    virtual void requestContextMenu(PluginsItemInterface * const itemInter, const QString &itemKey) = 0;
};

#endif // PLUGINPROXYINTERFACE_H
