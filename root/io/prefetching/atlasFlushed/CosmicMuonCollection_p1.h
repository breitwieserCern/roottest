//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef CosmicMuonCollection_p1_h
#define CosmicMuonCollection_p1_h
class CosmicMuonCollection_p1;

#include "Riostream.h"
#include <vector>
#include "TPObjRef.h"

class CosmicMuonCollection_p1 : public vector<TPObjRef> {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<TPObjRef> m_cosmicMuon;    //

   CosmicMuonCollection_p1();
   CosmicMuonCollection_p1(const CosmicMuonCollection_p1 & );
   virtual ~CosmicMuonCollection_p1();

};
#endif
