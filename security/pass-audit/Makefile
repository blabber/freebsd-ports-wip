# $FreeBSD$

PORTNAME=	pass-audit
PORTVERSION=	0.1
CATEGORIES=	security
MASTER_SITES=	https://github.com/roddhjav/${PORTNAME}/releases/download/v${PORTVERSION}/

MAINTAINER=	tobias.rehbein@web.de
COMMENT=	Extension to audit your password-store password repository

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${PY_FLAVOR} \
		password-store>=1.7:sysutils/password-store

USES=		python:3.4+:run shebangfix

NO_ARCH=	yes
NO_BUILD=	yes

SHEBANG_FILES=	${WRKSRC}/lib/audit.py
PLIST_FILES=	${LOCALBASE}/libexec/password-store/extensions/audit.bash \
		libexec/password-store/pass-audit/audit.py \
		man/man1/pass-audit.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's:\<python3\>:${PYTHON_CMD}:g' ${WRKSRC}/audit.bash
	@${REINPLACE_CMD} -e 's:%%PREFIX%%:${PREFIX}:g' ${WRKSRC}/audit.bash

do-install:
	${INSTALL_MAN} ${WRKSRC}/pass-audit.1 \
		${STAGEDIR}${MANPREFIX}/man/man1/pass-audit.1
	${MKDIR} ${STAGEDIR}${LOCALBASE}/libexec/password-store/extensions
	${INSTALL_SCRIPT} ${WRKSRC}/audit.bash \
		${STAGEDIR}${LOCALBASE}/libexec/password-store/extensions/audit.bash
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/password-store/pass-audit
	${INSTALL_SCRIPT} ${WRKSRC}/lib/audit.py \
		${STAGEDIR}${PREFIX}/libexec/password-store/pass-audit/audit.py


.include <bsd.port.mk>
