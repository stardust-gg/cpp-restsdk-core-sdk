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



#include "StardustCoreSDK/model/SDTemplateCreateBulk_props.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDTemplateCreateBulk_props::SDTemplateCreateBulk_props()
{
    m_ImmutableIsSet = false;
    m_r_mutableIsSet = false;
    m_mutableIsSet = false;
}

SDTemplateCreateBulk_props::~SDTemplateCreateBulk_props()
{
}

void SDTemplateCreateBulk_props::validate()
{
    // TODO: implement validation
}

web::json::value SDTemplateCreateBulk_props::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ImmutableIsSet)
    {
        val[utility::conversions::to_string_t(U("immutable"))] = ModelBase::toJson(m_Immutable);
    }
    if(m_r_mutableIsSet)
    {
        val[utility::conversions::to_string_t(U("mutable"))] = ModelBase::toJson(m_r_mutable);
    }
    if(m_mutableIsSet)
    {
        val[utility::conversions::to_string_t(U("$mutable"))] = ModelBase::toJson(m_mutable);
    }

    return val;
}

bool SDTemplateCreateBulk_props::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("immutable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("immutable")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setImmutable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImmutable);
            setImmutable(refVal_setImmutable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("mutable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mutable")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setRMutable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRMutable);
            setRMutable(refVal_setRMutable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("$mutable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("$mutable")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setMutable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMutable);
            setMutable(refVal_setMutable);
        }
    }
    return ok;
}

void SDTemplateCreateBulk_props::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ImmutableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("immutable")), m_Immutable));
    }
    if(m_r_mutableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mutable")), m_r_mutable));
    }
    if(m_mutableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$mutable")), m_mutable));
    }
}

bool SDTemplateCreateBulk_props::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("immutable"))))
    {
        std::shared_ptr<Object> refVal_setImmutable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("immutable"))), refVal_setImmutable );
        setImmutable(refVal_setImmutable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("mutable"))))
    {
        std::shared_ptr<Object> refVal_setRMutable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mutable"))), refVal_setRMutable );
        setRMutable(refVal_setRMutable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$mutable"))))
    {
        std::shared_ptr<Object> refVal_setMutable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$mutable"))), refVal_setMutable );
        setMutable(refVal_setMutable);
    }
    return ok;
}

std::shared_ptr<Object> SDTemplateCreateBulk_props::getImmutable() const
{
    return m_Immutable;
}

void SDTemplateCreateBulk_props::setImmutable(const std::shared_ptr<Object>& value)
{
    m_Immutable = value;
    m_ImmutableIsSet = true;
}

bool SDTemplateCreateBulk_props::immutableIsSet() const
{
    return m_ImmutableIsSet;
}

void SDTemplateCreateBulk_props::unsetImmutable()
{
    m_ImmutableIsSet = false;
}
std::shared_ptr<Object> SDTemplateCreateBulk_props::getRMutable() const
{
    return m_r_mutable;
}

void SDTemplateCreateBulk_props::setRMutable(const std::shared_ptr<Object>& value)
{
    m_r_mutable = value;
    m_r_mutableIsSet = true;
}

bool SDTemplateCreateBulk_props::rMutableIsSet() const
{
    return m_r_mutableIsSet;
}

void SDTemplateCreateBulk_props::unsetr_mutable()
{
    m_r_mutableIsSet = false;
}
std::shared_ptr<Object> SDTemplateCreateBulk_props::getMutable() const
{
    return m_mutable;
}

void SDTemplateCreateBulk_props::setMutable(const std::shared_ptr<Object>& value)
{
    m_mutable = value;
    m_mutableIsSet = true;
}

bool SDTemplateCreateBulk_props::r_mutableIsSet() const
{
    return m_mutableIsSet;
}

void SDTemplateCreateBulk_props::unsetmutable()
{
    m_mutableIsSet = false;
}
}
}
}
}


