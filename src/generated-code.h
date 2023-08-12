/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __GENERATED_CODE_H__
#define __GENERATED_CODE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.droidian.dsched */

#define TYPE_ORG_DROIDIAN_DSCHED (org_droidian_dsched_get_type ())
#define ORG_DROIDIAN_DSCHED(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_DROIDIAN_DSCHED, OrgDroidianDsched))
#define IS_ORG_DROIDIAN_DSCHED(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_DROIDIAN_DSCHED))
#define ORG_DROIDIAN_DSCHED_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_ORG_DROIDIAN_DSCHED, OrgDroidianDschedIface))

struct _OrgDroidianDsched;
typedef struct _OrgDroidianDsched OrgDroidianDsched;
typedef struct _OrgDroidianDschedIface OrgDroidianDschedIface;

struct _OrgDroidianDschedIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_add_pid) (
    OrgDroidianDsched *object,
    GDBusMethodInvocation *invocation,
    gint arg_pid);

};

GType org_droidian_dsched_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *org_droidian_dsched_interface_info (void);
guint org_droidian_dsched_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void org_droidian_dsched_complete_add_pid (
    OrgDroidianDsched *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void org_droidian_dsched_call_add_pid (
    OrgDroidianDsched *proxy,
    gint arg_pid,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_droidian_dsched_call_add_pid_finish (
    OrgDroidianDsched *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_droidian_dsched_call_add_pid_sync (
    OrgDroidianDsched *proxy,
    gint arg_pid,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_ORG_DROIDIAN_DSCHED_PROXY (org_droidian_dsched_proxy_get_type ())
#define ORG_DROIDIAN_DSCHED_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_DROIDIAN_DSCHED_PROXY, OrgDroidianDschedProxy))
#define ORG_DROIDIAN_DSCHED_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_DROIDIAN_DSCHED_PROXY, OrgDroidianDschedProxyClass))
#define ORG_DROIDIAN_DSCHED_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_DROIDIAN_DSCHED_PROXY, OrgDroidianDschedProxyClass))
#define IS_ORG_DROIDIAN_DSCHED_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_DROIDIAN_DSCHED_PROXY))
#define IS_ORG_DROIDIAN_DSCHED_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_DROIDIAN_DSCHED_PROXY))

typedef struct _OrgDroidianDschedProxy OrgDroidianDschedProxy;
typedef struct _OrgDroidianDschedProxyClass OrgDroidianDschedProxyClass;
typedef struct _OrgDroidianDschedProxyPrivate OrgDroidianDschedProxyPrivate;

struct _OrgDroidianDschedProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  OrgDroidianDschedProxyPrivate *priv;
};

struct _OrgDroidianDschedProxyClass
{
  GDBusProxyClass parent_class;
};

GType org_droidian_dsched_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (OrgDroidianDschedProxy, g_object_unref)
#endif

void org_droidian_dsched_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgDroidianDsched *org_droidian_dsched_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
OrgDroidianDsched *org_droidian_dsched_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void org_droidian_dsched_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgDroidianDsched *org_droidian_dsched_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
OrgDroidianDsched *org_droidian_dsched_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_ORG_DROIDIAN_DSCHED_SKELETON (org_droidian_dsched_skeleton_get_type ())
#define ORG_DROIDIAN_DSCHED_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_DROIDIAN_DSCHED_SKELETON, OrgDroidianDschedSkeleton))
#define ORG_DROIDIAN_DSCHED_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_DROIDIAN_DSCHED_SKELETON, OrgDroidianDschedSkeletonClass))
#define ORG_DROIDIAN_DSCHED_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_DROIDIAN_DSCHED_SKELETON, OrgDroidianDschedSkeletonClass))
#define IS_ORG_DROIDIAN_DSCHED_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_DROIDIAN_DSCHED_SKELETON))
#define IS_ORG_DROIDIAN_DSCHED_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_DROIDIAN_DSCHED_SKELETON))

typedef struct _OrgDroidianDschedSkeleton OrgDroidianDschedSkeleton;
typedef struct _OrgDroidianDschedSkeletonClass OrgDroidianDschedSkeletonClass;
typedef struct _OrgDroidianDschedSkeletonPrivate OrgDroidianDschedSkeletonPrivate;

struct _OrgDroidianDschedSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  OrgDroidianDschedSkeletonPrivate *priv;
};

struct _OrgDroidianDschedSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType org_droidian_dsched_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (OrgDroidianDschedSkeleton, g_object_unref)
#endif

OrgDroidianDsched *org_droidian_dsched_skeleton_new (void);


G_END_DECLS

#endif /* __GENERATED_CODE_H__ */
