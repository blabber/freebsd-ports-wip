# $FreeBSD$

PORTNAME=	purple-matrix
DISTVERSION=	g20191228
CATEGORIES=	net-im

MAINTAINER=	tobias.rehbein@web.de
COMMENT=	Libpurple protocol plugin for matrix

LICENSE=	GPLv2

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libhttp_parser.so:www/http-parser \
		libjson-glib-1.0.so:devel/json-glib \
		libolm.so:security/olm \
		libpurple.so:net-im/libpurple \
		libsqlite3.so:databases/sqlite3

USES=		gmake gnome pkgconfig
USE_GNOME=	glib20
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	matrix-org
GH_PROJECT=	purple-matrix
GH_TAGNAME=	1d23385

PLIST_FILES=	lib/purple-2/libmatrix.so

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/purple-2
	${INSTALL_LIB} ${WRKSRC}/libmatrix.so ${STAGEDIR}${PREFIX}/lib/purple-2

.include <bsd.port.mk>
