# $FreeBSD$

PORTNAME=	glslviewer
PORTVERSION=	1.6.8
CATEGORIES=	graphics

MAINTAINER=	tobias.rehbein@web.de
COMMENT=	Console-based GLSL Sandbox for 2D/3D shaders shaders

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libglfw.so:graphics/glfw

USES=		compiler:c++11-lang desktop-file-utils gmake pkgconfig

USE_GL=		gl glu
USE_XORG=	x11 xcursor xdamage xext xfixes xi xinerama xrandr xrender xxf86vm

USE_GITHUB=	yes
GH_ACCOUNT=	patriciogonzalezvivo
GH_PROJECT=	glslViewer
GH_TAGNAME=	${PORTVERSION}

OPTIONS_DEFINE=	EXAMPLES

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/glslViewer ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${LOCALBASE}/share/applications
	${INSTALL_DATA} ${WRKSRC}/glslViewer.desktop ${STAGEDIR}${LOCALBASE}/share/applications

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
