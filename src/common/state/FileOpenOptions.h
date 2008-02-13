/*****************************************************************************
*
* Copyright (c) 2000 - 2008, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-400142
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

#ifndef FILEOPENOPTIONS_H
#define FILEOPENOPTIONS_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>
class DBOptionsAttributes;
#include <DBPluginInfoAttributes.h>

// ****************************************************************************
// Class: FileOpenOptions
//
// Purpose:
//    This class contains the file opening options for all the database plugins.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Wed Feb 13 15:34:21 PST 2008
//
// Modifications:
//   
// ****************************************************************************

class STATE_API FileOpenOptions : public AttributeSubject
{
public:
    FileOpenOptions();
    FileOpenOptions(const FileOpenOptions &obj);
    virtual ~FileOpenOptions();

    virtual FileOpenOptions& operator = (const FileOpenOptions &obj);
    virtual bool operator == (const FileOpenOptions &obj) const;
    virtual bool operator != (const FileOpenOptions &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectTypeNames();
    void SelectTypeIDs();
    void SelectOpenOptions();
    void SelectEnabled();

    // Property setting methods
    void SetTypeNames(const stringVector &typeNames_);
    void SetTypeIDs(const stringVector &typeIDs_);
    void SetEnabled(const intVector &Enabled_);

    // Property getting methods
    const stringVector &GetTypeNames() const;
          stringVector &GetTypeNames();
    const stringVector &GetTypeIDs() const;
          stringVector &GetTypeIDs();
    const AttributeGroupVector &GetOpenOptions() const;
          AttributeGroupVector &GetOpenOptions();
    const intVector    &GetEnabled() const;
          intVector    &GetEnabled();

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);


    // Attributegroup convenience methods
    void AddOpenOptions(const DBOptionsAttributes &);
    void ClearOpenOptions();
    void RemoveOpenOptions(int i);
    int  GetNumOpenOptions() const;
    DBOptionsAttributes &GetOpenOptions(int i);
    const DBOptionsAttributes &GetOpenOptions(int i) const;

    DBOptionsAttributes &operator [] (int i);
    const DBOptionsAttributes &operator [] (int i) const;


    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    void MergeNewFromPluginInfo(const DBPluginInfoAttributes*);
    const DBOptionsAttributes *GetOpenOptionsForID(const std::string&);

    // IDs that can be used to identify fields in case statements
    enum {
        ID_typeNames = 0,
        ID_typeIDs,
        ID_openOptions,
        ID_Enabled
    };

protected:
    AttributeGroup *CreateSubAttributeGroup(int index);
private:
    stringVector         typeNames;
    stringVector         typeIDs;
    AttributeGroupVector openOptions;
    intVector            Enabled;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
};

#endif
