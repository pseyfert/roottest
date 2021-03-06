//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TauJet_p3_h
#define TauJet_p3_h
class TauJet_p3;

#include "P4EEtaPhiMFloat_p2.h"
#include "ParticleBase_p1.h"
#include "ElementLink_p1_unsigned_int_.h"
#include "ElementLinkVector_p1_unsigned_int_.h"
#include "Riostream.h"
#include <vector>
#include <utility>

class TauJet_p3 {

public:
// Nested classes declaration.

public:
// Data Members.
   P4EEtaPhiMFloat_p2 m_momentum;    //
   ParticleBase_p1    m_particleBase;    //
   ElementLink_p1<unsigned int> m_cluster;         //
   ElementLink_p1<unsigned int> m_cellCluster;     //
   ElementLink_p1<unsigned int> m_jet;             //
   ElementLinkVector_p1<unsigned int> m_tracks;          //
   ElementLinkVector_p1<unsigned int> m_tauDetails;      //
   unsigned char                      m_flags;           //
   unsigned long                      m_vetoFlags;       //
   unsigned long                      m_isTauFlags;      //
   unsigned long                      m_numberOfTracks;    //
   unsigned int                       m_roiWord;           //
   vector<pair<int,float> >           m_params;            //
   ElementLinkVector_p1<unsigned int> m_conversionTracks;    //

   TauJet_p3();
   TauJet_p3(const TauJet_p3 & );
   virtual ~TauJet_p3();

};
#endif
