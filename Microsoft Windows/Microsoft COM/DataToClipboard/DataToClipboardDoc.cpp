// DataToClipboardDoc.cpp : Implementierung der Klasse CDataToClipboardDoc
//

#include "stdafx.h"
#include "DataToClipboard.h"
#include "DataToClipboardDoc.h"
#include "CDib.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDataToClipboardDoc

IMPLEMENT_DYNCREATE(CDataToClipboardDoc, CDocument)

BEGIN_MESSAGE_MAP(CDataToClipboardDoc, CDocument)
	//{{AFX_MSG_MAP(CDataToClipboardDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDataToClipboardDoc Konstruktion/Destruktion

CDataToClipboardDoc::CDataToClipboardDoc()
{
	m_bDragHere = FALSE;
}

CDataToClipboardDoc::~CDataToClipboardDoc()
{
}

BOOL CDataToClipboardDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CDataToClipboardDoc Serialisierung

void CDataToClipboardDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// ZU ERLEDIGEN: Hier Code zum Speichern einf�gen
	}
	else
	{
		// ZU ERLEDIGEN: Hier Code zum Laden einf�gen
	}
}

/////////////////////////////////////////////////////////////////////////////
// CDataToClipboardDoc Diagnose

#ifdef _DEBUG
void CDataToClipboardDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDataToClipboardDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDataToClipboardDoc Befehle
