//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef MdtTrackSegmentCollection_p1_h
#define MdtTrackSegmentCollection_p1_h
class MdtTrackSegmentCollection_p1;

#include "Riostream.h"
#include <vector>
#include "TPObjRef.h"

class MdtTrackSegmentCollection_p1 : public vector<TPObjRef> {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<TPObjRef> m_mdtTrackSegment;    //

   MdtTrackSegmentCollection_p1();
   MdtTrackSegmentCollection_p1(const MdtTrackSegmentCollection_p1 & );
   virtual ~MdtTrackSegmentCollection_p1();

};
#endif