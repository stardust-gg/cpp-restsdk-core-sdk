/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SDTokenMintBulkTokenObject_props.h
 *
 * Internal metadata
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDTokenMintBulkTokenObject_props_H_
#define GG_STARDUST_CORESDK_MODEL_SDTokenMintBulkTokenObject_props_H_


#include "StardustCoreSDK/ModelBase.h"

#include "StardustCoreSDK/Object.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {


/// <summary>
/// Internal metadata
/// </summary>
class  SDTokenMintBulkTokenObject_props
    : public ModelBase
{
public:
    SDTokenMintBulkTokenObject_props();
    virtual ~SDTokenMintBulkTokenObject_props();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDTokenMintBulkTokenObject_props members

    /// <summary>
    /// Specifies which properties you want to add (ex. {prop1: 5, prop2: 6, prop3: 7})
    /// </summary>
    std::shared_ptr<Object> getRMutable() const;
    bool rMutableIsSet() const;
    void unsetr_mutable();

    void setRMutable(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Specifies which properties you want to add (ex. {prop1: 5, prop2: 6, prop3: 7})
    /// </summary>
    std::shared_ptr<Object> getImmutable() const;
    bool immutableIsSet() const;
    void unsetImmutable();

    void setImmutable(const std::shared_ptr<Object>& value);


protected:
    std::shared_ptr<Object> m_r_mutable;
    bool m_r_mutableIsSet;
    std::shared_ptr<Object> m_Immutable;
    bool m_ImmutableIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDTokenMintBulkTokenObject_props_H_ */