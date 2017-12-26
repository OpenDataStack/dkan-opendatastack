<?php

namespace OpenDataStack\Client;

use GuzzleHttp\Client;
use GuzzleHttp\Exception\RequestException;

class ElasticSearchImportClient
{
    /**
     * @var
     */
    private $uri;
    private $api_key;
    private $http;

    /**
     * @param string $uri
     * @param string $api_key
     */
    public function __construct($uri, $api_key, $handler = null)
    {
        $this->uri = $uri;
        $this->api_key = $api_key;

        $config = [
            // Base URI is used with relative requests
            'base_uri' => $this->uri,
            // You can set any number of default request options.
            'timeout' => 2.0,
        ];
        if ($handler) {
            $config['handler'] = $handler;
        }

        $this->http = new Client($config);
    }

    public function addImportConfiguration($importConfiguration)
    {
        $response = $this->http->request('POST', '/import-configuration', [
            'json' => $importConfiguration]);

        return json_decode($response->getBody(), true);
    }

    public function getImportConfiguration($importConfigurationId)
    {
        try {
            $response = $this->http->request('GET', '/import-configuration/' . $importConfigurationId);
            return json_decode($response->getBody(), true);
        } catch (RequestException $ex) {
            return false;
        }
    }

    public function deleteImportConfiguration($importConfigurationId)
    {
        $response = $this->http->request('DELETE', '/import-configuration/' . $importConfigurationId);
        return $response->getStatusCode();
    }

    public function requestImport($importConfiguration)
    {
        $response = $this->http->request('POST', '/request-import', [
            'json' => $importConfiguration]);
        return json_decode($response->getBody(), true);
    }

    public function getImportConfigurations()
    {
        try {
            $response = $this->http->request('GET', '/import-configurations');
            return json_decode($response->getBody(), true);
        } catch (RequestException $ex) {
            return false;
        }
    }

    public function statusConfiguration($uuid)
    {
        $response = $this->http->request('GET', '/import-configuration/' . $uuid);
        return $response->getBody()->getContents();
    }

    public function statusResource($uuid, $resourceId)
    {
        $response = $this->http->request('GET', '/import-configuration/' . $uuid . '/resource/' . $resourceId);
        return $response->getBody()->getContents();
    }
}