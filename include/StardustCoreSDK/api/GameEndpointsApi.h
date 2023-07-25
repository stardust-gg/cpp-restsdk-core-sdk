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

/*
 * GameEndpointsApi.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_GameEndpointsApi_H_
#define GG_STARDUST_CORESDK_GameEndpointsApi_H_



#include "StardustCoreSDK/ApiClient.h"

#include "StardustCoreSDK/model/Error.h"
#include "StardustCoreSDK/Object.h"
#include "StardustCoreSDK/model/SDGameGetResponse.h"
#include "StardustCoreSDK/model/SDGameMutateRequest.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace gg {
namespace stardust {
namespace coresdk {

using namespace gg::stardust::coresdk::model;

class  IGameEndpointsApi
{
public:
    IGameEndpointsApi() = default;
    virtual ~IGameEndpointsApi() = default;

    virtual pplx::task<std::shared_ptr<SDGameGetResponse>> gameGetGet(
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Object>> gameMutatePut(
        std::shared_ptr<SDGameMutateRequest> sDGameMutateRequest
    ) const = 0;
};

class  GameEndpointsApi  : public IGameEndpointsApi 
{
public:
    using Base = IGameEndpointsApi;

    explicit GameEndpointsApi( std::shared_ptr<const ApiClient> apiClient );

    ~GameEndpointsApi() override;

    /// <summary>
    /// Get Game
    /// </summary>
    /// <remarks>
    /// Get the Details of Your Game
    /// </remarks>
    pplx::task<std::shared_ptr<SDGameGetResponse>> gameGetGet(
    ) const override;
    /// <summary>
    /// Mutate Game
    /// </summary>
    /// <remarks>
    /// Change a games data
    /// </remarks>
    /// <param name="sDGameMutateRequest"></param>
    pplx::task<std::shared_ptr<Object>> gameMutatePut(
        std::shared_ptr<SDGameMutateRequest> sDGameMutateRequest
    ) const override;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* GG_STARDUST_CORESDK_GameEndpointsApi_H_ */

