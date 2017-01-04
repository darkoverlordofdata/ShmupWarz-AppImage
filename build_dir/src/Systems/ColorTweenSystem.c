/* ColorTweenSystem.c generated by valac 0.34.4, the Vala compiler
 * generated from ColorTweenSystem.gs, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <entitas.h>
#include <bosco.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM (shmup_warz_color_tween_system_get_type ())
#define SHMUP_WARZ_COLOR_TWEEN_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM, ShmupWarzColorTweenSystem))
#define SHMUP_WARZ_COLOR_TWEEN_SYSTEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM, ShmupWarzColorTweenSystemClass))
#define SHMUP_WARZ_IS_COLOR_TWEEN_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM))
#define SHMUP_WARZ_IS_COLOR_TWEEN_SYSTEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM))
#define SHMUP_WARZ_COLOR_TWEEN_SYSTEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM, ShmupWarzColorTweenSystemClass))

typedef struct _ShmupWarzColorTweenSystem ShmupWarzColorTweenSystem;
typedef struct _ShmupWarzColorTweenSystemClass ShmupWarzColorTweenSystemClass;
typedef struct _ShmupWarzColorTweenSystemPrivate ShmupWarzColorTweenSystemPrivate;

#define SHMUP_WARZ_TYPE_GAME (shmup_warz_game_get_type ())
#define SHMUP_WARZ_GAME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_GAME, ShmupWarzGame))
#define SHMUP_WARZ_GAME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_GAME, ShmupWarzGameClass))
#define SHMUP_WARZ_IS_GAME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_GAME))
#define SHMUP_WARZ_IS_GAME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_GAME))
#define SHMUP_WARZ_GAME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_GAME, ShmupWarzGameClass))

typedef struct _ShmupWarzGame ShmupWarzGame;
typedef struct _ShmupWarzGameClass ShmupWarzGameClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SHMUP_WARZ_TYPE_COMPONENT (shmup_warz_component_get_type ())

#define SHMUP_WARZ_TYPE_TINT_COMPONENT (shmup_warz_tint_component_get_type ())
#define SHMUP_WARZ_TINT_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_TINT_COMPONENT, ShmupWarzTintComponent))
#define SHMUP_WARZ_TINT_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_TINT_COMPONENT, ShmupWarzTintComponentClass))
#define SHMUP_WARZ_IS_TINT_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_TINT_COMPONENT))
#define SHMUP_WARZ_IS_TINT_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_TINT_COMPONENT))
#define SHMUP_WARZ_TINT_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_TINT_COMPONENT, ShmupWarzTintComponentClass))

typedef struct _ShmupWarzTintComponent ShmupWarzTintComponent;
typedef struct _ShmupWarzTintComponentClass ShmupWarzTintComponentClass;

#define SHMUP_WARZ_TYPE_COLOR_TWEEN_COMPONENT (shmup_warz_color_tween_component_get_type ())
#define SHMUP_WARZ_COLOR_TWEEN_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_COLOR_TWEEN_COMPONENT, ShmupWarzColorTweenComponent))
#define SHMUP_WARZ_COLOR_TWEEN_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_COLOR_TWEEN_COMPONENT, ShmupWarzColorTweenComponentClass))
#define SHMUP_WARZ_IS_COLOR_TWEEN_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_COLOR_TWEEN_COMPONENT))
#define SHMUP_WARZ_IS_COLOR_TWEEN_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_COLOR_TWEEN_COMPONENT))
#define SHMUP_WARZ_COLOR_TWEEN_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_COLOR_TWEEN_COMPONENT, ShmupWarzColorTweenComponentClass))

typedef struct _ShmupWarzColorTweenComponent ShmupWarzColorTweenComponent;
typedef struct _ShmupWarzColorTweenComponentClass ShmupWarzColorTweenComponentClass;
typedef struct _ShmupWarzColorTweenComponentPrivate ShmupWarzColorTweenComponentPrivate;
typedef struct _ShmupWarzTintComponentPrivate ShmupWarzTintComponentPrivate;

#define SHMUP_WARZ_TYPE_RESOURCE_COMPONENT (shmup_warz_resource_component_get_type ())
#define SHMUP_WARZ_RESOURCE_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT, ShmupWarzResourceComponent))
#define SHMUP_WARZ_RESOURCE_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT, ShmupWarzResourceComponentClass))
#define SHMUP_WARZ_IS_RESOURCE_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT))
#define SHMUP_WARZ_IS_RESOURCE_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT))
#define SHMUP_WARZ_RESOURCE_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_RESOURCE_COMPONENT, ShmupWarzResourceComponentClass))

typedef struct _ShmupWarzResourceComponent ShmupWarzResourceComponent;
typedef struct _ShmupWarzResourceComponentClass ShmupWarzResourceComponentClass;
typedef struct _ShmupWarzResourceComponentPrivate ShmupWarzResourceComponentPrivate;

struct _ShmupWarzColorTweenSystem {
	GObject parent_instance;
	ShmupWarzColorTweenSystemPrivate * priv;
};

struct _ShmupWarzColorTweenSystemClass {
	GObjectClass parent_class;
};

struct _ShmupWarzColorTweenSystemPrivate {
	EntitasWorld* _world;
	EntitasGroup* _group;
	ShmupWarzGame* _game;
};

typedef enum  {
	SHMUP_WARZ_COMPONENT_Bounds,
	SHMUP_WARZ_COMPONENT_Bullet,
	SHMUP_WARZ_COMPONENT_ColorTween,
	SHMUP_WARZ_COMPONENT_Destroy,
	SHMUP_WARZ_COMPONENT_Enemy,
	SHMUP_WARZ_COMPONENT_Expires,
	SHMUP_WARZ_COMPONENT_Firing,
	SHMUP_WARZ_COMPONENT_Health,
	SHMUP_WARZ_COMPONENT_Layer,
	SHMUP_WARZ_COMPONENT_Life,
	SHMUP_WARZ_COMPONENT_Mine,
	SHMUP_WARZ_COMPONENT_Mouse,
	SHMUP_WARZ_COMPONENT_Player,
	SHMUP_WARZ_COMPONENT_Position,
	SHMUP_WARZ_COMPONENT_Resource,
	SHMUP_WARZ_COMPONENT_ScaleTween,
	SHMUP_WARZ_COMPONENT_Scale,
	SHMUP_WARZ_COMPONENT_Score,
	SHMUP_WARZ_COMPONENT_SoundEffect,
	SHMUP_WARZ_COMPONENT_Text,
	SHMUP_WARZ_COMPONENT_Tint,
	SHMUP_WARZ_COMPONENT_Velocity,
	SHMUP_WARZ_COMPONENT_ComponentsCount
} ShmupWarzComponent;

struct _ShmupWarzColorTweenComponent {
	GObject parent_instance;
	ShmupWarzColorTweenComponentPrivate * priv;
	gdouble redMin;
	gdouble redMax;
	gdouble redSpeed;
	gdouble greenMin;
	gdouble greenMax;
	gdouble greenSpeed;
	gdouble blueMin;
	gdouble blueMax;
	gdouble blueSpeed;
	gdouble alphaMin;
	gdouble alphaMax;
	gdouble alphaSpeed;
	gboolean redAnimate;
	gboolean greenAnimate;
	gboolean blueAnimate;
	gboolean alphaAnimate;
	gboolean repeat;
};

struct _ShmupWarzColorTweenComponentClass {
	GObjectClass parent_class;
};

struct _ShmupWarzTintComponent {
	GObject parent_instance;
	ShmupWarzTintComponentPrivate * priv;
	gint r;
	gint g;
	gint b;
	gint a;
};

struct _ShmupWarzTintComponentClass {
	GObjectClass parent_class;
};

struct _ShmupWarzResourceComponent {
	GObject parent_instance;
	ShmupWarzResourceComponentPrivate * priv;
	gchar* path;
	GObject* sprite;
	gboolean bgd;
};

struct _ShmupWarzResourceComponentClass {
	GObjectClass parent_class;
};


static gpointer shmup_warz_color_tween_system_parent_class = NULL;
static EntitasISystemIface* shmup_warz_color_tween_system_entitas_isystem_parent_iface = NULL;
static EntitasISetWorldIface* shmup_warz_color_tween_system_entitas_iset_world_parent_iface = NULL;
static EntitasIInitializeSystemIface* shmup_warz_color_tween_system_entitas_iinitialize_system_parent_iface = NULL;
static EntitasIExecuteSystemIface* shmup_warz_color_tween_system_entitas_iexecute_system_parent_iface = NULL;

GType shmup_warz_color_tween_system_get_type (void) G_GNUC_CONST;
GType shmup_warz_game_get_type (void) G_GNUC_CONST;
#define SHMUP_WARZ_COLOR_TWEEN_SYSTEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM, ShmupWarzColorTweenSystemPrivate))
enum  {
	SHMUP_WARZ_COLOR_TWEEN_SYSTEM_DUMMY_PROPERTY
};
ShmupWarzColorTweenSystem* shmup_warz_color_tween_system_new (ShmupWarzGame* game);
ShmupWarzColorTweenSystem* shmup_warz_color_tween_system_construct (GType object_type, ShmupWarzGame* game);
static void shmup_warz_color_tween_system_real_setWorld (EntitasISetWorld* base, EntitasWorld* world);
static void shmup_warz_color_tween_system_real_initialize (EntitasIInitializeSystem* base);
GType shmup_warz_component_get_type (void) G_GNUC_CONST;
static void shmup_warz_color_tween_system_real_execute (EntitasIExecuteSystem* base);
GType shmup_warz_tint_component_get_type (void) G_GNUC_CONST;
ShmupWarzTintComponent* shmup_warz_getTint (EntitasEntity* e);
GType shmup_warz_color_tween_component_get_type (void) G_GNUC_CONST;
ShmupWarzColorTweenComponent* shmup_warz_getColorTween (EntitasEntity* e);
GType shmup_warz_resource_component_get_type (void) G_GNUC_CONST;
ShmupWarzResourceComponent* shmup_warz_getResource (EntitasEntity* e);
static void shmup_warz_color_tween_system_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


ShmupWarzColorTweenSystem* shmup_warz_color_tween_system_construct (GType object_type, ShmupWarzGame* game) {
	ShmupWarzColorTweenSystem * self = NULL;
	ShmupWarzGame* _tmp0_ = NULL;
	ShmupWarzGame* _tmp1_ = NULL;
	g_return_val_if_fail (game != NULL, NULL);
	self = (ShmupWarzColorTweenSystem*) g_object_new (object_type, NULL);
	_tmp0_ = game;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_game);
	self->priv->_game = _tmp1_;
	return self;
}


ShmupWarzColorTweenSystem* shmup_warz_color_tween_system_new (ShmupWarzGame* game) {
	return shmup_warz_color_tween_system_construct (SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM, game);
}


static void shmup_warz_color_tween_system_real_setWorld (EntitasISetWorld* base, EntitasWorld* world) {
	ShmupWarzColorTweenSystem * self;
	EntitasWorld* _tmp0_ = NULL;
	EntitasWorld* _tmp1_ = NULL;
	self = (ShmupWarzColorTweenSystem*) base;
	g_return_if_fail (world != NULL);
	_tmp0_ = world;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_world);
	self->priv->_world = _tmp1_;
}


static void shmup_warz_color_tween_system_real_initialize (EntitasIInitializeSystem* base) {
	ShmupWarzColorTweenSystem * self;
	EntitasWorld* _tmp0_ = NULL;
	gint* _tmp1_ = NULL;
	gint* _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	EntitasIMatcher* _tmp3_ = NULL;
	EntitasIMatcher* _tmp4_ = NULL;
	EntitasGroup* _tmp5_ = NULL;
	self = (ShmupWarzColorTweenSystem*) base;
	_tmp0_ = self->priv->_world;
	_tmp1_ = g_new0 (gint, 2);
	_tmp1_[0] = (gint) SHMUP_WARZ_COMPONENT_ColorTween;
	_tmp1_[1] = (gint) SHMUP_WARZ_COMPONENT_Tint;
	_tmp2_ = _tmp1_;
	_tmp2__length1 = 2;
	_tmp3_ = entitas_matcher_AllOf (_tmp2_, 2);
	_tmp4_ = _tmp3_;
	_tmp5_ = entitas_world_getGroup (_tmp0_, _tmp4_);
	_g_object_unref0 (self->priv->_group);
	self->priv->_group = _tmp5_;
	_g_object_unref0 (_tmp4_);
	_tmp2_ = (g_free (_tmp2_), NULL);
}


static void shmup_warz_color_tween_system_real_execute (EntitasIExecuteSystem* base) {
	ShmupWarzColorTweenSystem * self;
	gdouble delta = 0.0;
	ShmupWarzGame* _tmp0_ = NULL;
	gdouble _tmp1_ = 0.0;
	gdouble _tmp2_ = 0.0;
	EntitasGroup* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	EntitasEntity** _tmp5_ = NULL;
	self = (ShmupWarzColorTweenSystem*) base;
	_tmp0_ = self->priv->_game;
	_tmp1_ = bosco_abstract_game_get_delta ((BoscoAbstractGame*) _tmp0_);
	_tmp2_ = _tmp1_;
	delta = _tmp2_;
	_tmp3_ = self->priv->_group;
	_tmp5_ = entitas_group_getEntities (_tmp3_, &_tmp4_);
	{
		EntitasEntity** entity_collection = NULL;
		gint entity_collection_length1 = 0;
		gint _entity_collection_size_ = 0;
		gint entity_it = 0;
		entity_collection = _tmp5_;
		entity_collection_length1 = _tmp4_;
		for (entity_it = 0; entity_it < _tmp4_; entity_it = entity_it + 1) {
			EntitasEntity* _tmp6_ = NULL;
			EntitasEntity* entity = NULL;
			_tmp6_ = _g_object_ref0 (entity_collection[entity_it]);
			entity = _tmp6_;
			{
				ShmupWarzTintComponent* tint = NULL;
				EntitasEntity* _tmp7_ = NULL;
				ShmupWarzTintComponent* _tmp8_ = NULL;
				ShmupWarzColorTweenComponent* tween = NULL;
				EntitasEntity* _tmp9_ = NULL;
				ShmupWarzColorTweenComponent* _tmp10_ = NULL;
				ShmupWarzColorTweenComponent* _tmp11_ = NULL;
				gboolean _tmp12_ = FALSE;
				ShmupWarzColorTweenComponent* _tmp34_ = NULL;
				gboolean _tmp35_ = FALSE;
				ShmupWarzColorTweenComponent* _tmp57_ = NULL;
				gboolean _tmp58_ = FALSE;
				ShmupWarzColorTweenComponent* _tmp80_ = NULL;
				gboolean _tmp81_ = FALSE;
				BoscoSprite* sprite = NULL;
				EntitasEntity* _tmp103_ = NULL;
				ShmupWarzResourceComponent* _tmp104_ = NULL;
				ShmupWarzResourceComponent* _tmp105_ = NULL;
				GObject* _tmp106_ = NULL;
				BoscoSprite* _tmp107_ = NULL;
				BoscoSprite* _tmp108_ = NULL;
				BoscoSprite* _tmp109_ = NULL;
				ShmupWarzTintComponent* _tmp110_ = NULL;
				gint _tmp111_ = 0;
				BoscoSprite* _tmp112_ = NULL;
				ShmupWarzTintComponent* _tmp113_ = NULL;
				gint _tmp114_ = 0;
				BoscoSprite* _tmp115_ = NULL;
				ShmupWarzTintComponent* _tmp116_ = NULL;
				gint _tmp117_ = 0;
				_tmp7_ = entity;
				_tmp8_ = shmup_warz_getTint (_tmp7_);
				tint = _tmp8_;
				_tmp9_ = entity;
				_tmp10_ = shmup_warz_getColorTween (_tmp9_);
				tween = _tmp10_;
				_tmp11_ = tween;
				_tmp12_ = _tmp11_->redAnimate;
				if (_tmp12_) {
					ShmupWarzTintComponent* _tmp13_ = NULL;
					ShmupWarzTintComponent* _tmp14_ = NULL;
					gint _tmp15_ = 0;
					ShmupWarzColorTweenComponent* _tmp16_ = NULL;
					gdouble _tmp17_ = 0.0;
					gdouble _tmp18_ = 0.0;
					gboolean _tmp19_ = FALSE;
					ShmupWarzTintComponent* _tmp20_ = NULL;
					gint _tmp21_ = 0;
					ShmupWarzColorTweenComponent* _tmp22_ = NULL;
					gdouble _tmp23_ = 0.0;
					_tmp13_ = tint;
					_tmp14_ = tint;
					_tmp15_ = _tmp14_->r;
					_tmp16_ = tween;
					_tmp17_ = _tmp16_->redSpeed;
					_tmp18_ = delta;
					_tmp13_->r = _tmp15_ + ((gint) (((gdouble) _tmp17_) * _tmp18_));
					_tmp20_ = tint;
					_tmp21_ = _tmp20_->r;
					_tmp22_ = tween;
					_tmp23_ = _tmp22_->redMax;
					if (((gdouble) _tmp21_) > _tmp23_) {
						_tmp19_ = TRUE;
					} else {
						ShmupWarzTintComponent* _tmp24_ = NULL;
						gint _tmp25_ = 0;
						ShmupWarzColorTweenComponent* _tmp26_ = NULL;
						gdouble _tmp27_ = 0.0;
						_tmp24_ = tint;
						_tmp25_ = _tmp24_->r;
						_tmp26_ = tween;
						_tmp27_ = _tmp26_->redMin;
						_tmp19_ = ((gdouble) _tmp25_) < _tmp27_;
					}
					if (_tmp19_) {
						ShmupWarzColorTweenComponent* _tmp28_ = NULL;
						gboolean _tmp29_ = FALSE;
						_tmp28_ = tween;
						_tmp29_ = _tmp28_->repeat;
						if (_tmp29_) {
							ShmupWarzColorTweenComponent* _tmp30_ = NULL;
							ShmupWarzColorTweenComponent* _tmp31_ = NULL;
							gdouble _tmp32_ = 0.0;
							_tmp30_ = tween;
							_tmp31_ = tween;
							_tmp32_ = _tmp31_->redSpeed;
							_tmp30_->redSpeed = -_tmp32_;
						} else {
							ShmupWarzColorTweenComponent* _tmp33_ = NULL;
							_tmp33_ = tween;
							_tmp33_->redAnimate = FALSE;
						}
					}
				}
				_tmp34_ = tween;
				_tmp35_ = _tmp34_->greenAnimate;
				if (_tmp35_) {
					ShmupWarzTintComponent* _tmp36_ = NULL;
					ShmupWarzTintComponent* _tmp37_ = NULL;
					gint _tmp38_ = 0;
					ShmupWarzColorTweenComponent* _tmp39_ = NULL;
					gdouble _tmp40_ = 0.0;
					gdouble _tmp41_ = 0.0;
					gboolean _tmp42_ = FALSE;
					ShmupWarzTintComponent* _tmp43_ = NULL;
					gint _tmp44_ = 0;
					ShmupWarzColorTweenComponent* _tmp45_ = NULL;
					gdouble _tmp46_ = 0.0;
					_tmp36_ = tint;
					_tmp37_ = tint;
					_tmp38_ = _tmp37_->g;
					_tmp39_ = tween;
					_tmp40_ = _tmp39_->greenSpeed;
					_tmp41_ = delta;
					_tmp36_->g = _tmp38_ + ((gint) (((gdouble) _tmp40_) * _tmp41_));
					_tmp43_ = tint;
					_tmp44_ = _tmp43_->g;
					_tmp45_ = tween;
					_tmp46_ = _tmp45_->greenMax;
					if (((gdouble) _tmp44_) > _tmp46_) {
						_tmp42_ = TRUE;
					} else {
						ShmupWarzTintComponent* _tmp47_ = NULL;
						gint _tmp48_ = 0;
						ShmupWarzColorTweenComponent* _tmp49_ = NULL;
						gdouble _tmp50_ = 0.0;
						_tmp47_ = tint;
						_tmp48_ = _tmp47_->g;
						_tmp49_ = tween;
						_tmp50_ = _tmp49_->greenMin;
						_tmp42_ = ((gdouble) _tmp48_) < _tmp50_;
					}
					if (_tmp42_) {
						ShmupWarzColorTweenComponent* _tmp51_ = NULL;
						gboolean _tmp52_ = FALSE;
						_tmp51_ = tween;
						_tmp52_ = _tmp51_->repeat;
						if (_tmp52_) {
							ShmupWarzColorTweenComponent* _tmp53_ = NULL;
							ShmupWarzColorTweenComponent* _tmp54_ = NULL;
							gdouble _tmp55_ = 0.0;
							_tmp53_ = tween;
							_tmp54_ = tween;
							_tmp55_ = _tmp54_->greenSpeed;
							_tmp53_->greenSpeed = -_tmp55_;
						} else {
							ShmupWarzColorTweenComponent* _tmp56_ = NULL;
							_tmp56_ = tween;
							_tmp56_->greenAnimate = FALSE;
						}
					}
				}
				_tmp57_ = tween;
				_tmp58_ = _tmp57_->blueAnimate;
				if (_tmp58_) {
					ShmupWarzTintComponent* _tmp59_ = NULL;
					ShmupWarzTintComponent* _tmp60_ = NULL;
					gint _tmp61_ = 0;
					ShmupWarzColorTweenComponent* _tmp62_ = NULL;
					gdouble _tmp63_ = 0.0;
					gdouble _tmp64_ = 0.0;
					gboolean _tmp65_ = FALSE;
					ShmupWarzTintComponent* _tmp66_ = NULL;
					gint _tmp67_ = 0;
					ShmupWarzColorTweenComponent* _tmp68_ = NULL;
					gdouble _tmp69_ = 0.0;
					_tmp59_ = tint;
					_tmp60_ = tint;
					_tmp61_ = _tmp60_->b;
					_tmp62_ = tween;
					_tmp63_ = _tmp62_->blueSpeed;
					_tmp64_ = delta;
					_tmp59_->b = _tmp61_ + ((gint) (((gdouble) _tmp63_) * _tmp64_));
					_tmp66_ = tint;
					_tmp67_ = _tmp66_->b;
					_tmp68_ = tween;
					_tmp69_ = _tmp68_->blueMax;
					if (((gdouble) _tmp67_) > _tmp69_) {
						_tmp65_ = TRUE;
					} else {
						ShmupWarzTintComponent* _tmp70_ = NULL;
						gint _tmp71_ = 0;
						ShmupWarzColorTweenComponent* _tmp72_ = NULL;
						gdouble _tmp73_ = 0.0;
						_tmp70_ = tint;
						_tmp71_ = _tmp70_->b;
						_tmp72_ = tween;
						_tmp73_ = _tmp72_->blueMin;
						_tmp65_ = ((gdouble) _tmp71_) < _tmp73_;
					}
					if (_tmp65_) {
						ShmupWarzColorTweenComponent* _tmp74_ = NULL;
						gboolean _tmp75_ = FALSE;
						_tmp74_ = tween;
						_tmp75_ = _tmp74_->repeat;
						if (_tmp75_) {
							ShmupWarzColorTweenComponent* _tmp76_ = NULL;
							ShmupWarzColorTweenComponent* _tmp77_ = NULL;
							gdouble _tmp78_ = 0.0;
							_tmp76_ = tween;
							_tmp77_ = tween;
							_tmp78_ = _tmp77_->blueSpeed;
							_tmp76_->blueSpeed = -_tmp78_;
						} else {
							ShmupWarzColorTweenComponent* _tmp79_ = NULL;
							_tmp79_ = tween;
							_tmp79_->blueAnimate = FALSE;
						}
					}
				}
				_tmp80_ = tween;
				_tmp81_ = _tmp80_->alphaAnimate;
				if (_tmp81_) {
					ShmupWarzTintComponent* _tmp82_ = NULL;
					ShmupWarzTintComponent* _tmp83_ = NULL;
					gint _tmp84_ = 0;
					ShmupWarzColorTweenComponent* _tmp85_ = NULL;
					gdouble _tmp86_ = 0.0;
					gdouble _tmp87_ = 0.0;
					gboolean _tmp88_ = FALSE;
					ShmupWarzTintComponent* _tmp89_ = NULL;
					gint _tmp90_ = 0;
					ShmupWarzColorTweenComponent* _tmp91_ = NULL;
					gdouble _tmp92_ = 0.0;
					_tmp82_ = tint;
					_tmp83_ = tint;
					_tmp84_ = _tmp83_->a;
					_tmp85_ = tween;
					_tmp86_ = _tmp85_->alphaSpeed;
					_tmp87_ = delta;
					_tmp82_->a = _tmp84_ + ((gint) (((gdouble) _tmp86_) * _tmp87_));
					_tmp89_ = tint;
					_tmp90_ = _tmp89_->a;
					_tmp91_ = tween;
					_tmp92_ = _tmp91_->alphaMax;
					if (((gdouble) _tmp90_) > _tmp92_) {
						_tmp88_ = TRUE;
					} else {
						ShmupWarzTintComponent* _tmp93_ = NULL;
						gint _tmp94_ = 0;
						ShmupWarzColorTweenComponent* _tmp95_ = NULL;
						gdouble _tmp96_ = 0.0;
						_tmp93_ = tint;
						_tmp94_ = _tmp93_->a;
						_tmp95_ = tween;
						_tmp96_ = _tmp95_->alphaMin;
						_tmp88_ = ((gdouble) _tmp94_) < _tmp96_;
					}
					if (_tmp88_) {
						ShmupWarzColorTweenComponent* _tmp97_ = NULL;
						gboolean _tmp98_ = FALSE;
						_tmp97_ = tween;
						_tmp98_ = _tmp97_->repeat;
						if (_tmp98_) {
							ShmupWarzColorTweenComponent* _tmp99_ = NULL;
							ShmupWarzColorTweenComponent* _tmp100_ = NULL;
							gdouble _tmp101_ = 0.0;
							_tmp99_ = tween;
							_tmp100_ = tween;
							_tmp101_ = _tmp100_->alphaSpeed;
							_tmp99_->alphaSpeed = -_tmp101_;
						} else {
							ShmupWarzColorTweenComponent* _tmp102_ = NULL;
							_tmp102_ = tween;
							_tmp102_->alphaAnimate = FALSE;
						}
					}
				}
				_tmp103_ = entity;
				_tmp104_ = shmup_warz_getResource (_tmp103_);
				_tmp105_ = _tmp104_;
				_tmp106_ = _tmp105_->sprite;
				_tmp107_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp106_, BOSCO_TYPE_SPRITE, BoscoSprite));
				_tmp108_ = _tmp107_;
				_g_object_unref0 (_tmp105_);
				sprite = _tmp108_;
				_tmp109_ = sprite;
				_tmp110_ = tint;
				_tmp111_ = _tmp110_->r;
				_tmp109_->color.r = (guint8) _tmp111_;
				_tmp112_ = sprite;
				_tmp113_ = tint;
				_tmp114_ = _tmp113_->g;
				_tmp112_->color.g = (guint8) _tmp114_;
				_tmp115_ = sprite;
				_tmp116_ = tint;
				_tmp117_ = _tmp116_->b;
				_tmp115_->color.b = (guint8) _tmp117_;
				_g_object_unref0 (sprite);
				_g_object_unref0 (tween);
				_g_object_unref0 (tint);
				_g_object_unref0 (entity);
			}
		}
		entity_collection = (_vala_array_free (entity_collection, entity_collection_length1, (GDestroyNotify) g_object_unref), NULL);
	}
}


static void shmup_warz_color_tween_system_class_init (ShmupWarzColorTweenSystemClass * klass) {
	shmup_warz_color_tween_system_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ShmupWarzColorTweenSystemPrivate));
	G_OBJECT_CLASS (klass)->finalize = shmup_warz_color_tween_system_finalize;
}


static void shmup_warz_color_tween_system_entitas_isystem_interface_init (EntitasISystemIface * iface) {
	shmup_warz_color_tween_system_entitas_isystem_parent_iface = g_type_interface_peek_parent (iface);
}


static void shmup_warz_color_tween_system_entitas_iset_world_interface_init (EntitasISetWorldIface * iface) {
	shmup_warz_color_tween_system_entitas_iset_world_parent_iface = g_type_interface_peek_parent (iface);
	iface->setWorld = (void (*)(EntitasISetWorld*, EntitasWorld*)) shmup_warz_color_tween_system_real_setWorld;
}


static void shmup_warz_color_tween_system_entitas_iinitialize_system_interface_init (EntitasIInitializeSystemIface * iface) {
	shmup_warz_color_tween_system_entitas_iinitialize_system_parent_iface = g_type_interface_peek_parent (iface);
	iface->initialize = (void (*)(EntitasIInitializeSystem*)) shmup_warz_color_tween_system_real_initialize;
}


static void shmup_warz_color_tween_system_entitas_iexecute_system_interface_init (EntitasIExecuteSystemIface * iface) {
	shmup_warz_color_tween_system_entitas_iexecute_system_parent_iface = g_type_interface_peek_parent (iface);
	iface->execute = (void (*)(EntitasIExecuteSystem*)) shmup_warz_color_tween_system_real_execute;
}


static void shmup_warz_color_tween_system_instance_init (ShmupWarzColorTweenSystem * self) {
	self->priv = SHMUP_WARZ_COLOR_TWEEN_SYSTEM_GET_PRIVATE (self);
}


static void shmup_warz_color_tween_system_finalize (GObject* obj) {
	ShmupWarzColorTweenSystem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SHMUP_WARZ_TYPE_COLOR_TWEEN_SYSTEM, ShmupWarzColorTweenSystem);
	_g_object_unref0 (self->priv->_world);
	_g_object_unref0 (self->priv->_group);
	_g_object_unref0 (self->priv->_game);
	G_OBJECT_CLASS (shmup_warz_color_tween_system_parent_class)->finalize (obj);
}


GType shmup_warz_color_tween_system_get_type (void) {
	static volatile gsize shmup_warz_color_tween_system_type_id__volatile = 0;
	if (g_once_init_enter (&shmup_warz_color_tween_system_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShmupWarzColorTweenSystemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) shmup_warz_color_tween_system_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShmupWarzColorTweenSystem), 0, (GInstanceInitFunc) shmup_warz_color_tween_system_instance_init, NULL };
		static const GInterfaceInfo entitas_isystem_info = { (GInterfaceInitFunc) shmup_warz_color_tween_system_entitas_isystem_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iset_world_info = { (GInterfaceInitFunc) shmup_warz_color_tween_system_entitas_iset_world_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iinitialize_system_info = { (GInterfaceInitFunc) shmup_warz_color_tween_system_entitas_iinitialize_system_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iexecute_system_info = { (GInterfaceInitFunc) shmup_warz_color_tween_system_entitas_iexecute_system_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType shmup_warz_color_tween_system_type_id;
		shmup_warz_color_tween_system_type_id = g_type_register_static (G_TYPE_OBJECT, "ShmupWarzColorTweenSystem", &g_define_type_info, 0);
		g_type_add_interface_static (shmup_warz_color_tween_system_type_id, ENTITAS_TYPE_ISYSTEM, &entitas_isystem_info);
		g_type_add_interface_static (shmup_warz_color_tween_system_type_id, ENTITAS_TYPE_ISET_WORLD, &entitas_iset_world_info);
		g_type_add_interface_static (shmup_warz_color_tween_system_type_id, ENTITAS_TYPE_IINITIALIZE_SYSTEM, &entitas_iinitialize_system_info);
		g_type_add_interface_static (shmup_warz_color_tween_system_type_id, ENTITAS_TYPE_IEXECUTE_SYSTEM, &entitas_iexecute_system_info);
		g_once_init_leave (&shmup_warz_color_tween_system_type_id__volatile, shmup_warz_color_tween_system_type_id);
	}
	return shmup_warz_color_tween_system_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


