// DataToClipboard.h : Haupt-Header-Datei f�r die Anwendung DATATOCLIPBOARD
//

#if !defined(AFX_DATATOCLIPBOARD_H__5C1C1BA2_5DB3_4733_86AD_4732893EBD2E__INCLUDED_)
#define AFX_DATATOCLIPBOARD_H__5C1C1BA2_5DB3_4733_86AD_4732893EBD2E__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CDataToClipboardApp:
// Siehe DataToClipboard.cpp f�r die Implementierung dieser Klasse
//

class CDataToClipboardApp : public CWinApp
{
public:
	CDataToClipboardApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CDataToClipboardApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung

	//{{AFX_MSG(CDataToClipboardApp)
	afx_msg void OnAppAbout();
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio f�gt zus�tzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_DATATOCLIPBOARD_H__5C1C1BA2_5DB3_4733_86AD_4732893EBD2E__INCLUDED_)
