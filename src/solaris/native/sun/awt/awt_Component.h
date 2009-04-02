/*
 * Copyright 1998-2006 Sun Microsystems, Inc.  All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Sun designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Sun in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa Clara,
 * CA 95054 USA or visit www.sun.com if you need additional information or
 * have any questions.
 */

#include "jni_util.h"

/* fieldIDs for Component fields that may be accessed from C */
struct ComponentIDs {
    jfieldID x;
    jfieldID y;
    jfieldID width;
    jfieldID height;
    jfieldID peer;
    jfieldID background;
    jfieldID foreground;
    jfieldID isPacked;
    jfieldID graphicsConfig;
    jfieldID name;
    jfieldID isProxyActive;
    jfieldID appContext;
    jmethodID getParent;
    jmethodID getLocationOnScreen;
    jmethodID resetGCMID;
};

/* field and method IDs for Container */
struct ContainerIDs {
    jfieldID layoutMgr;
    jmethodID getComponents;
    jmethodID findComponentAt;
};

/* fieldIDs for MComponentPeer fields that may be accessed from C */
struct MComponentPeerIDs {
    jfieldID pData;
    jfieldID target;
    jfieldID jniGlobalRef;
    jfieldID graphicsConfig;
    jfieldID drawState;
    jmethodID isFocusableMID;
};

#ifndef HEADLESS
extern void processTree(Widget from, Widget to, Boolean action);
#endif // HEADLESS

/* fieldIDs for Canvas fields that may be accessed from C */
struct CanvasIDs {
    jmethodID setGCFromPeerMID;
};
