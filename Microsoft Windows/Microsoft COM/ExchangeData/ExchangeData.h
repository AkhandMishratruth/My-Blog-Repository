// ExchangeData.h : Haupt-Header-Datei f�r die DLL EXCHANGEDATA
//

#if !defined(AFX_EXCHANGEDATA_H__E11D9BC7_0A84_42D0_A94E_BAEF094CE7F0__INCLUDED_)
#define AFX_EXCHANGEDATA_H__E11D9BC7_0A84_42D0_A94E_BAEF094CE7F0__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CExchangeDataApp
// Siehe ExchangeData.cpp f�r die Implementierung dieser Klasse
//

class CExchangeDataApp : public CWinApp
{
public:
	CExchangeDataApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CExchangeDataApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CExchangeDataApp)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio f�gt zus�tzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EXCHANGEDATA_H__E11D9BC7_0A84_42D0_A94E_BAEF094CE7F0__INCLUDED_)
