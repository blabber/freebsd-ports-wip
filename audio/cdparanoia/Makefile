# Created by: Simon 'corecode' Schubert <corecode@corecode.ath.cx>
# $FreeBSD: head/audio/cdparanoia/Makefile 387522 2015-05-26 23:28:51Z amdmi3 $

PORTNAME=	cdparanoia
PORTVERSION=	3.10.2
CATEGORIES=	audio sysutils
MASTER_SITES=	http://downloads.xiph.org/releases/cdparanoia/
DISTNAME=	${PORTNAME}-${PORTVERSION:C/^3\./III-/}
EXTRACT_SUFX=	.src.tgz

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	CDDA extraction tool (also known as ripper)

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING-GPL

USES=		gmake
USE_LDCONFIG=	yes

# Selected fixes commited to upstream SVN but not released for years.
# To keep these apart from FreeBSD specific patches keep these as EXTRA_PATCHES.
EXTRA_PATCHES=	${PATCHDIR}/extra-patch-upstream-patch-r15314 \
		${PATCHDIR}/extra-patch-upstream-patch-r15337 \
		${PATCHDIR}/extra-patch-upstream-patch-r15338

GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's/\(^ *default:\)/\1break;/' \
		${WRKSRC}/interface/utils.h

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libcdda_*.so

.include <bsd.port.mk>
