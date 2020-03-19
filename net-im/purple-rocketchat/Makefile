# $FreeBSD: head/net-im/pidgin-rocketchat/Makefile 517063 2019-11-08 13:34:26Z tobik $

PORTNAME=	pidgin-rocketchat
PORTVERSION=	0.0.20171004
CATEGORIES=	net-im
MASTER_SITES=	https://bitbucket.org/EionRobb/purple-rocketchat/get/
DISTNAME=	fb8dcc649782

MAINTAINER=	mizhka@gmail.com
COMMENT=	Rocket.Chat Plugin for libpurple

LICENSE=	GPLv3

LIB_DEPENDS=	libjson-glib-1.0.so:devel/json-glib \
		libpurple.so:net-im/libpurple
BUILD_DEPENDS=	${LOCALBASE}/lib/libmarkdown.a:textproc/discount
RUN_DEPENDS=	pidgin:net-im/pidgin

USES=		gmake gnome pkgconfig zip
USE_GNOME=	glib20
USE_LDCONFIG=	yes

PLIST_FILES=	lib/pidgin/librocketchat.so
WRKSRC=		${WRKDIR}/EionRobb-purple-rocketchat-${DISTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pidgin
	${INSTALL_LIB} ${WRKSRC}/librocketchat.so ${STAGEDIR}${PREFIX}/lib/pidgin

.include <bsd.port.mk>
