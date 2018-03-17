// Copyright (c) 2012-2013 Andre Martins
// All Rights Reserved.
//
// This file is part of TurboParser 2.1.
//
// TurboParser 2.1 is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// TurboParser 2.1 is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with TurboParser 2.1.  If not, see <http://www.gnu.org/licenses/>.

#ifndef DEPENDENCYINSTANCE_H_
#define DEPENDENCYINSTANCE_H_

#include <string>
#include <vector>
#include "Instance.h"

class DependencyInstance : public Instance {
 public:
  DependencyInstance() {};
  virtual ~DependencyInstance() {};

  void Initialize(const vector<string> &forms,
		  	  	  const vector<string> &brownall,
                  const vector<string> &lemmas,
                  const vector<string> &cpos, 
                  const vector<string> &brown4,
                  const vector<string> &brown6,
                  const vector<string> &pos, 
                  const vector<vector<string> > &feats,
                  const vector<string> &deprels, 
                  const vector<int> &heads,
                  const vector<int> &selects);

  int size() { return forms_.size(); };

  const string &GetForm(int i) { return forms_[i]; };
  const string &GetBrownAll(int i) { return brownall_[i]; };
  const string &GetLemma(int i) { return lemmas_[i]; };
  const string &GetCoarsePosTag(int i) { return cpostags_[i]; };
  const string &GetBrown4(int i) { return brown4_[i]; };
  const string &GetBrown6(int i) { return brown6_[i]; };
  const string &GetPosTag(int i) { return postags_[i]; };
  int GetNumMorphFeatures(int i) { return feats_[i].size(); };
  const string &GetMorphFeature(int i, int j) { return feats_[i][j]; };
  int GetHead(int i) { return heads_[i]; };
  int GetSelect(int i) { return selects_[i]; };
  const string &GetDependencyRelation(int i) { return deprels_[i]; };

  void SetHead(int i, int head) { heads_[i] = head; }
  void SetDependencyRelation(int i, const string &dependency_relation) {
    deprels_[i] = dependency_relation;
  }

 protected:
  // FORM: the forms - usually words, like "thought"
  vector<string> forms_;
  // BROWNALL: the brown cluster feature, take all the bits
  vector<string> brownall_;
  // LEMMA: the lemmas, or stems, e.g. "think"
  vector<string> lemmas_;
  // COURSE-POS: the course part-of-speech tags, e.g."V"
  vector<string> cpostags_;
  // BROWN4: the first 4 bit of the brown cluster feature
  vector<string> brown4_;
  // BROWN6: the first 6 bit of the brown cluster feature
  vector<string> brown6_;
  // FINE-POS: the fine-grained part-of-speech tags, e.g."VBD"
  vector<string> postags_;
  // FEATURES: some features associated with the elements separated by "|", e.g. "PAST|3P"
  vector<vector<string> > feats_;
  // HEAD: the IDs of the heads for each element
  vector<int> heads_;
  // DEPREL: the dependency relations, e.g. "SUBJ"
  vector<string> deprels_;

  vector<int> selects_;
};

#endif /* DEPENDENCYINSTANCE_H_*/
