/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-07-25T00:59:12Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "StardustCoreSDK/model/SDPlayerMutateRequest.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDPlayerMutateRequest::SDPlayerMutateRequest()
{
    m_PlayerId = utility::conversions::to_string_t("");
    m_PlayerIdIsSet = false;
    m_PropsIsSet = false;
}

SDPlayerMutateRequest::~SDPlayerMutateRequest()
{
}

void SDPlayerMutateRequest::validate()
{
    // TODO: implement validation
}

web::json::value SDPlayerMutateRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PlayerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("playerId"))] = ModelBase::toJson(m_PlayerId);
    }
    if(m_PropsIsSet)
    {
        val[utility::conversions::to_string_t(U("props"))] = ModelBase::toJson(m_Props);
    }

    return val;
}

bool SDPlayerMutateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("playerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("playerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlayerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlayerId);
            setPlayerId(refVal_setPlayerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("props"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("props")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setProps;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProps);
            setProps(refVal_setProps);
        }
    }
    return ok;
}

void SDPlayerMutateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PlayerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("playerId")), m_PlayerId));
    }
    if(m_PropsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("props")), m_Props));
    }
}

bool SDPlayerMutateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("playerId"))))
    {
        utility::string_t refVal_setPlayerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("playerId"))), refVal_setPlayerId );
        setPlayerId(refVal_setPlayerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("props"))))
    {
        std::shared_ptr<Object> refVal_setProps;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("props"))), refVal_setProps );
        setProps(refVal_setProps);
    }
    return ok;
}

utility::string_t SDPlayerMutateRequest::getPlayerId() const
{
    return m_PlayerId;
}

void SDPlayerMutateRequest::setPlayerId(const utility::string_t& value)
{
    m_PlayerId = value;
    m_PlayerIdIsSet = true;
}

bool SDPlayerMutateRequest::playerIdIsSet() const
{
    return m_PlayerIdIsSet;
}

void SDPlayerMutateRequest::unsetPlayerId()
{
    m_PlayerIdIsSet = false;
}
std::shared_ptr<Object> SDPlayerMutateRequest::getProps() const
{
    return m_Props;
}

void SDPlayerMutateRequest::setProps(const std::shared_ptr<Object>& value)
{
    m_Props = value;
    m_PropsIsSet = true;
}

bool SDPlayerMutateRequest::propsIsSet() const
{
    return m_PropsIsSet;
}

void SDPlayerMutateRequest::unsetProps()
{
    m_PropsIsSet = false;
}
}
}
}
}


