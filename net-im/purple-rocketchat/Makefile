# $FreeBSD: head/net-im/pidgin-rocketchat/Makefile 517063 2019-11-08 13:34:26Z tobik $

PORTNAME=	purple-rocketchat
PORTVERSION=	0.0.20190416
CATEGORIES=	net-im
MASTER_SITES=	https://bitbucket.org/EionRobb/purple-rocketchat/get/
DISTNAME=	826990b48f41

MAINTAINER=	mizhka@gmail.com
COMMENT=	Rocket.Chat Plugin for libpurple

LICENSE=	GPLv3

LIB_DEPENDS=	libjson-glib-1.0.so:devel/json-glib \
		libpurple.so:net-im/libpurple
BUILD_DEPENDS=	${LOCALBASE}/lib/libmarkdown.a:textproc/discount

USES=		gmake gnome pkgconfig zip
USE_GNOME=	glib20
USE_LDCONFIG=	yes

PLIST_FILES=	lib/purple-2/librocketchat.so
WRKSRC=		${WRKDIR}/EionRobb-purple-rocketchat-${DISTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/purple-2
	${INSTALL_LIB} ${WRKSRC}/librocketchat.so ${STAGEDIR}${PREFIX}/lib/purple-2

.include <bsd.port.mk>
