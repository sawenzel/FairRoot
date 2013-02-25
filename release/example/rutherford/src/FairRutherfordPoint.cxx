#include "FairRutherfordPoint.h"

#include <iostream>
using std::cout;
using std::endl;


// -----   Default constructor   -------------------------------------------
FairRutherfordPoint::FairRutherfordPoint()
  : FairMCPoint()
{
}
// -------------------------------------------------------------------------

// -----   Standard constructor   ------------------------------------------
FairRutherfordPoint::FairRutherfordPoint(Int_t trackID, Int_t detID,
    TVector3 pos, TVector3 mom,
    Double_t tof, Double_t length,
    Double_t eLoss, Double_t radius,
    Double_t phi, Double_t theta)
  : FairMCPoint(trackID, detID, pos, mom, tof, length, eLoss),
    fRadius(radius),
    fPhi(phi),
    fTheta(theta)
{
}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
FairRutherfordPoint::~FairRutherfordPoint() { }
// -------------------------------------------------------------------------

// -----   Public method Print   -------------------------------------------
void FairRutherfordPoint::Print(const Option_t* opt) const
{
  cout << "-I- FairRutherfordPoint: FairRutherford point for track " << fTrackID
       << " in detector " << fDetectorID << endl;
  cout << "    Position (" << fX << ", " << fY << ", " << fZ
       << ") cm" << endl;
  cout << "    Momentum (" << fPx << ", " << fPy << ", " << fPz
       << ") GeV" << endl;
  cout << "    Time " << fTime << " ns,  Length " << fLength
       << " cm,  Energy loss " << fELoss*1.0e06 << " keV" << endl;
}
// -------------------------------------------------------------------------

ClassImp(FairRutherfordPoint)
